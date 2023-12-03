#include <iostream>
#include <fstream>
#include <string>

#include "CAppConfigMgr.h"
#include "CBuyBoxConfigMgr.h"

int main()
{
        CAppConfigMgr::Instance().Init();
        auto Cfg = CAppConfigMgr::Instance().GetAppCfg();
        std::cout << Cfg.ResBinPath << std::endl;
        CBuyBoxConfigMgr::Instance().Init();

        auto BuyBoxCfg = CBuyBoxConfigMgr::Instance().GetBuyBoxConfigCfg({101});
        if (!BuyBoxCfg)
        {
                std::cout << "failed" << std::endl;
                return 0;
        }

        std::cout << BuyBoxCfg->Utf8DebugString() << std::endl;
        // std::cout << std::is_base_of<google::protobuf::Message, resource::BuyBoxConfig>::value << std::endl;
        // // resource::BuyBoxConfig config;
        // // config.set_boxid(32);
        // // auto desc = config.GetDescriptor();
        // // for (int i = 0; i < desc->field_count(); ++i)
        // // {
        // //   auto field = desc->field(i);

        // //   std::string name = field->name();
        // //   printf("Field name: %s %s\n", name.c_str(), field->cpp_type_name());
        // // }

        // // // desc->
        // // auto ref = config.GetReflection();
        // // auto box_field = desc->FindFieldByName("BoxID");
        // // box_field->cpp_type_name();
        // // std::cout << ref->GetInt32(config, box_field) << std::endl;
        // resource::BuyBoxConfigList config;
        // resource::BuyBoxConfig sconfig;
        // auto sub1 = config.add_data();
        // sub1->set_activitysubid(121);
        // auto sub2 = config.add_data();
        // sub2->set_activitysubid(123);

        // auto desc = config.GetDescriptor();
        // auto ref = config.GetReflection();
        // auto fieldDefine = desc->FindFieldByName("data");
        // auto pa = google::protobuf::MessageFactory::generated_factory()->GetPrototype(fieldDefine->message_type());
        // auto sub = pa->New();
        // std::cout << sub->GetTypeName() << std::endl;
        // std::cout << ref->FieldSize(config, fieldDefine) << std::endl;
        // for(int i = 0; i < ref->FieldSize(config, fieldDefine); ++i)
        // {
        //      auto subRef = ref->GetRepeatedMessage(config, fieldDefine, i).GetReflection();
        //      // id = subRef->GetInt32(ref->GetRepeatedMessage(config, fieldDefine, i), ref->GetRepeatedMessage(config, fieldDefine, i).GetDescriptor()->FindFieldByName("ActivitySubID"));
        //      // subRef->GetField<()
        //      // std::cout << id << std::endl;
        // }
        // // auto fieldType = fieldDefine->cpp_type();
    // // auto dataDesc = fieldDefine->
    // // auto dataRef = fieldDefine->GetReflection();
        // for (int i = 0; i < desc->field_count(); ++i)
        // {
        //      auto field = desc->field(i);

        //      std::string name = field->name();
        //      printf("Field name: %s %s\n", name.c_str(), field->cpp_type_name());
        // }
        return 0;
}