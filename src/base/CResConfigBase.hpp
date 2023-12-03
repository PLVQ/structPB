#pragma once
#include <string>
#include <vector>
#include <any>

#include "CSingleton.h"
#include "BoxConfig.pb.h"
#include "CConfigBase.h"

using std::string;
using std::vector;

using google::protobuf::FieldDescriptor;

template <typename T, typename K>
class CResConfigBase : public Singleton<CResConfigBase<T,K>>
{
    static_assert(std::is_base_of<google::protobuf::Message, T>::value, "type error");

public:
    friend class Singleton<CResConfigBase<T, K>>;
    CResConfigBase() = default;
    ~CResConfigBase() = default;
    virtual bool Load(const std::string &FileName, std::initializer_list<std::string> Key);
    virtual bool BuildGroup(std::initializer_list<std::string> Key);

    const K* Get(std::vector<std::any> Key);
    const K* At(int iIdx);

private:
    T m_table;
    vector<string> m_vecKey;
    vector<string> m_vecGroupKey;
};

template <typename T, typename K>
bool CResConfigBase<T, K>::Load(const std::string &FileName, std::initializer_list<std::string> Key)
{
    auto strPath = CConfigJson<AppCFG>::Instance().Get().ResBinPath;
    std::ifstream in(strPath + FileName + ".bin", std::ios::in | std::ios::binary);
    if (!in)
    {
        std::cout << "File Not Found" << std::endl;
        return false;
    }

    if (!m_table.ParseFromIstream(&in))
    {
        std::cout << "ParseFromIstream Failed!" << std::endl;
        return false;
    }

    // 记录key
    for (auto iter = Key.begin(); iter != Key.end(); ++iter)
    {
        m_vecKey.emplace_back(*iter);
    }

    return true;
}

template <typename T, typename K>
bool CResConfigBase<T, K>::BuildGroup(std::initializer_list<std::string> Key)
{
    // 记录key
    for (auto iter = Key.begin(); iter != Key.end(); ++iter)
    {
        m_vecGroupKey.emplace_back(*iter);
    }

    return true;
}

template <typename T, typename K>
const K* CResConfigBase<T, K>::Get(std::vector<std::any> Key)
{
    if (Key.size() != m_vecKey.size())
    {
        return nullptr;
    }

    google::protobuf::Message *pTable = &m_table;
    auto tableDesc = pTable->GetDescriptor();
    auto tableRef = pTable->GetReflection();

    auto pFieldMsgDefine = tableDesc->FindFieldByName("data");
    if (!pFieldMsgDefine)
    {
        return nullptr;
    }

    for (int i = 0; i < tableRef->FieldSize(m_table, pFieldMsgDefine); ++i)
    {
        auto pFieldMsgDesc = tableRef->GetRepeatedMessage(m_table, pFieldMsgDefine, i).GetDescriptor();
        auto pFieldMsgRef = tableRef->GetRepeatedMessage(m_table, pFieldMsgDefine, i).GetReflection();
        auto bFind = false;
        for (int keyIdx = 0; keyIdx < m_vecKey.size(); ++keyIdx)
        {
            auto pFieldDefine = pFieldMsgDesc->FindFieldByName(m_vecKey[keyIdx]);
            pFieldMsgRef->GetInt32(tableRef->GetRepeatedMessage(m_table, pFieldMsgDefine, i), pFieldDefine);
            switch (pFieldDefine->cpp_type())
            {
            case FieldDescriptor::CPPTYPE_INT32:
                bFind = pFieldMsgRef->GetInt32(tableRef->GetRepeatedMessage(m_table, pFieldMsgDefine, i), pFieldDefine) == std::any_cast<int>(Key[keyIdx]);
                break;
            case FieldDescriptor::CPPTYPE_FLOAT: 
                bFind = pFieldMsgRef->GetFloat(tableRef->GetRepeatedMessage(m_table, pFieldMsgDefine, i), pFieldDefine) == std::any_cast<float>(Key[keyIdx]);
                break;
            case FieldDescriptor::CPPTYPE_DOUBLE:
                bFind = pFieldMsgRef->GetDouble(tableRef->GetRepeatedMessage(m_table, pFieldMsgDefine, i), pFieldDefine) == std::any_cast<double>(Key[keyIdx]);
                break;
            case FieldDescriptor::CPPTYPE_INT64:
                bFind = pFieldMsgRef->GetInt64(tableRef->GetRepeatedMessage(m_table, pFieldMsgDefine, i), pFieldDefine) == std::any_cast<int64_t>(Key[keyIdx]);
                break;
            case FieldDescriptor::CPPTYPE_UINT64:
                bFind = pFieldMsgRef->GetUInt64(tableRef->GetRepeatedMessage(m_table, pFieldMsgDefine, i), pFieldDefine) == std::any_cast<uint64_t>(Key[keyIdx]);
                break;
            case FieldDescriptor::CPPTYPE_UINT32:
                bFind = pFieldMsgRef->GetUInt32(tableRef->GetRepeatedMessage(m_table, pFieldMsgDefine, i), pFieldDefine) == std::any_cast<uint32_t>(Key[keyIdx]);
                break;
            case FieldDescriptor::CPPTYPE_STRING:
                bFind = pFieldMsgRef->GetString(tableRef->GetRepeatedMessage(m_table, pFieldMsgDefine, i), pFieldDefine) == std::any_cast<std::string>(Key[keyIdx]);
                break;
            default:
                break;
            }
        }

        if (bFind)
        {
            return &m_table.data()[i];
        }
    }

    return nullptr;
}

template <typename T, typename K>
const K* CResConfigBase<T, K>::At(int iIdx)
{
    return &m_table.data().at(iIdx);
}