#pragma once

#include <string>
#include "CAppConfigDefine.h"
#include "CSingleton.h"

class CAppConfigMgr : public Singleton<CAppConfigMgr>
{
    friend class Singleton<CAppConfigMgr>;

public:
    int Init();

    const AppCFG &GetAppCfg();
    const std::string &GetResBinPath();
};