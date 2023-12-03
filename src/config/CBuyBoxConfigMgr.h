#pragma once

#include <vector>
#include <any>

#include "CSingleton.h"
#include "BoxConfig.pb.h"

using namespace resource;

class CBuyBoxConfigMgr:public Singleton<CBuyBoxConfigMgr>
{
private:
    /* data */
    friend class Singleton<CBuyBoxConfigMgr>;

public:
    CBuyBoxConfigMgr() = default;
    ~CBuyBoxConfigMgr() = default;

    bool Init();
    const BuyBoxConfig* GetBuyBoxConfigCfg(std::vector<std::any> Key);
};
