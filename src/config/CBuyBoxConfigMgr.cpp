#include "CBuyBoxConfigMgr.h"
#include "CConfigBase.h"
#include "CAppConfigMgr.h"
#include "CResConfigBase.hpp"

bool CBuyBoxConfigMgr::Init()
{
    if (!CResConfigBase<BuyBoxConfigList, BuyBoxConfig>::Instance().Load("BuyBoxConfig", {"BoxID"}))
    {
        std::cout << "load error" << std::endl;
        return false;
    }

    return true;
}

const BuyBoxConfig* CBuyBoxConfigMgr::GetBuyBoxConfigCfg(std::vector<std::any> Key)
{
    return CResConfigBase<BuyBoxConfigList, BuyBoxConfig>::Instance().Get(Key);
}
