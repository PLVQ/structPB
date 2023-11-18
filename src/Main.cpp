#include <iostream>
#include <fstream>
#include <string>

#include "BoxConfig.struct_pb.h"

int main()
{
    resource::BuyBoxConfigList buyBoxCfgList;
    std::ifstream in("BuyBoxConfig.bin", std::ios::in | std::ios::binary);
    if (!in)
    {
        std::cout << "BuyBoxConfig.bin Not Found!" << std::endl;
        return 0;
    }

    in.seekg(0, in.end);
    int len = in.tellg();
    in.seekg(0, in.beg);
    std::string buffer;
    buffer.resize(len);
    in.read(buffer.data(), buffer.size());
    in.close();

    auto ok = struct_pb::deserialize_to(buyBoxCfgList, buffer);
    if (ok)
    {
        std::cout << buyBoxCfgList.data[0].BoxDesc << std::endl;
    };

    std::cout << "hello world!" << std::endl;
    return 0;
}