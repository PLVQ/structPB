#include "CAppConfigMgr.h"
#include "CConfigBase.h"

int CAppConfigMgr::Init()
{
    if (!CConfigJson<AppCFG>::Instance().Load("Cfg.json"))
    {
        return 0;
    }

    return 0;
}

const AppCFG& CAppConfigMgr::GetAppCfg()
{
    return CConfigJson<AppCFG>::Instance().Get();
}

const std::string& CAppConfigMgr::GetResBinPath()
{
    return GetAppCfg().ResBinPath;
}
