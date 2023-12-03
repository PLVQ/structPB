#pragma once

#include <string>
#include <vector>

#include "ylt/struct_json/json_reader.h"
#include "ylt/struct_pb.hpp"
#include "CSingleton.h"
#include "CAppConfigDefine.h"
#include "BoxConfig.pb.h"

using std::vector;
using std::string;

template <typename T>
class CConfigBase
{
public:
    CConfigBase() = default;
    ~CConfigBase() = default;
    virtual bool Load(const std::string &FileName) = 0;
    const T &Get() { return m_config; }

protected:
    T m_config;
};

template<typename T>
class CConfigJson : public CConfigBase<T>, public Singleton<CConfigJson<T>>
{
public:
    friend class Singleton<CConfigJson<T>>;
    virtual bool Load(const std::string &FileName)
    {
        try
        {
            /* code */
            struct_json::from_json_file(this->m_config, FileName);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
            return false;
        }
        return true;
    }
};

