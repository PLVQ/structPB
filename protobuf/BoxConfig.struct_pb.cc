// protoc generate parameter
// clang-format off
// 
// =========================
#include "BoxConfig.struct_pb.h"
#include "ylt/struct_pb/struct_pb_impl.hpp"
namespace struct_pb {
namespace internal {
// ::resource::BuyBoxConfig
template<>
std::size_t get_needed_size<::resource::BuyBoxConfig>(const ::resource::BuyBoxConfig& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t total = unknown_fields.total_size();
  if (t.BoxType != 0) {
    total += 1 + calculate_varint_size(t.BoxType);
  }
  if (t.BoxID != 0) {
    total += 1 + calculate_varint_size(t.BoxID);
  }
  if (t.ActivitySubID != 0) {
    total += 1 + calculate_varint_size(t.ActivitySubID);
  }
  if (t.SortID != 0) {
    total += 1 + calculate_varint_size(t.SortID);
  }
  if (t.UnlockLv != 0) {
    total += 1 + calculate_varint_size(t.UnlockLv);
  }
  if (!t.BoxName.empty()) {
    total += 1 + calculate_varint_size(t.BoxName.size()) + t.BoxName.size();
  }
  if (!t.BoxNameColorTop.empty()) {
    total += 1 + calculate_varint_size(t.BoxNameColorTop.size()) + t.BoxNameColorTop.size();
  }
  if (!t.BoxNameColorDown.empty()) {
    total += 1 + calculate_varint_size(t.BoxNameColorDown.size()) + t.BoxNameColorDown.size();
  }
  if (!t.BoxNameOutlineColor.empty()) {
    total += 1 + calculate_varint_size(t.BoxNameOutlineColor.size()) + t.BoxNameOutlineColor.size();
  }
  if (!t.BoxDesc.empty()) {
    total += 1 + calculate_varint_size(t.BoxDesc.size()) + t.BoxDesc.size();
  }
  if (!t.BoxDescColor.empty()) {
    total += 1 + calculate_varint_size(t.BoxDescColor.size()) + t.BoxDescColor.size();
  }
  if (!t.BoxDescOutlineColor.empty()) {
    total += 1 + calculate_varint_size(t.BoxDescOutlineColor.size()) + t.BoxDescOutlineColor.size();
  }
  if (!t.BoxIcon.empty()) {
    total += 1 + calculate_varint_size(t.BoxIcon.size()) + t.BoxIcon.size();
  }
  if (t.BoxPortrait != 0) {
    total += 1 + calculate_varint_size(t.BoxPortrait);
  }
  if (!t.BoxBg.empty()) {
    total += 1 + calculate_varint_size(t.BoxBg.size()) + t.BoxBg.size();
  }
  if (!t.EntranceIcon.empty()) {
    total += 2 + calculate_varint_size(t.EntranceIcon.size()) + t.EntranceIcon.size();
  }
  if (t.DrawCardPanelType != 0) {
    total += 2 + calculate_varint_size(t.DrawCardPanelType);
  }
  if (t.CostItemID != 0) {
    total += 2 + calculate_varint_size(t.CostItemID);
  }
  if (t.CostItemCnt != 0) {
    total += 2 + calculate_varint_size(t.CostItemCnt);
  }
  if (t.CostMoneyType != 0) {
    total += 2 + calculate_varint_size(t.CostMoneyType);
  }
  if (t.CostMoneyCnt != 0) {
    total += 2 + calculate_varint_size(t.CostMoneyCnt);
  }
  if (t.FreeRefreshint32erval != 0) {
    total += 2 + calculate_varint_size(t.FreeRefreshint32erval);
  }
  if (t.FirstBooty != 0) {
    total += 2 + calculate_varint_size(t.FirstBooty);
  }
  if (t.CostBootyID != 0) {
    total += 2 + calculate_varint_size(t.CostBootyID);
  }
  if (t.TenCostItemID != 0) {
    total += 2 + calculate_varint_size(t.TenCostItemID);
  }
  if (t.TenCostItemCnt != 0) {
    total += 2 + calculate_varint_size(t.TenCostItemCnt);
  }
  if (t.TenCostMoneyType != 0) {
    total += 2 + calculate_varint_size(t.TenCostMoneyType);
  }
  if (t.TenCostMoneyCnt != 0) {
    total += 2 + calculate_varint_size(t.TenCostMoneyCnt);
  }
  if (t.TenCostBootyID != 0) {
    total += 2 + calculate_varint_size(t.TenCostBootyID);
  }
  if (t.TenDiscount != 0) {
    total += 2 + 4;
  }
  if (t.Replenish != 0) {
    total += 2 + calculate_varint_size(t.Replenish);
  }
  if (t.EnsureShowBootyID != 0) {
    total += 2 + calculate_varint_size(t.EnsureShowBootyID);
  }
  if (t.UnLockWishHeroCnt != 0) {
    total += 2 + calculate_varint_size(t.UnLockWishHeroCnt);
  }
  if (t.UnLockWishBlessHeroCnt != 0) {
    total += 2 + calculate_varint_size(t.UnLockWishBlessHeroCnt);
  }
  if (t.BlessingCnt != 0) {
    total += 2 + calculate_varint_size(t.BlessingCnt);
  }
  if (t.RuleTextID != 0) {
    total += 2 + calculate_varint_size(t.RuleTextID);
  }
  if (t.CardPoolID != 0) {
    total += 2 + calculate_varint_size(t.CardPoolID);
  }
  if (t.WishPoolID != 0) {
    total += 2 + calculate_varint_size(t.WishPoolID);
  }
  if (t.UPPoolID != 0) {
    total += 2 + calculate_varint_size(t.UPPoolID);
  }
  return total;
} // std::size_t get_needed_size<::resource::BuyBoxConfig>(const ::resource::BuyBoxConfig& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
void serialize_to<::resource::BuyBoxConfig>(char* data, std::size_t size, const ::resource::BuyBoxConfig& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  {
    // int32_t BoxType; // int32, field number = 1
    if (t.BoxType != 0) {
      serialize_varint(data, pos, size, 8);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.BoxType));
    }
  }
  {
    // int32_t BoxID; // int32, field number = 2
    if (t.BoxID != 0) {
      serialize_varint(data, pos, size, 16);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.BoxID));
    }
  }
  {
    // int32_t ActivitySubID; // int32, field number = 3
    if (t.ActivitySubID != 0) {
      serialize_varint(data, pos, size, 24);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.ActivitySubID));
    }
  }
  {
    // int32_t SortID; // int32, field number = 4
    if (t.SortID != 0) {
      serialize_varint(data, pos, size, 32);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.SortID));
    }
  }
  {
    // int32_t UnlockLv; // int32, field number = 5
    if (t.UnlockLv != 0) {
      serialize_varint(data, pos, size, 40);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.UnlockLv));
    }
  }
  {
    // std::string BoxName; // string, field number = 6
    if (!t.BoxName.empty()) {
      serialize_varint(data, pos, size, 50);
      serialize_varint(data, pos, size, t.BoxName.size());
      std::memcpy(data + pos, t.BoxName.data(), t.BoxName.size());
      pos += t.BoxName.size();
    }
  }
  {
    // std::string BoxNameColorTop; // string, field number = 7
    if (!t.BoxNameColorTop.empty()) {
      serialize_varint(data, pos, size, 58);
      serialize_varint(data, pos, size, t.BoxNameColorTop.size());
      std::memcpy(data + pos, t.BoxNameColorTop.data(), t.BoxNameColorTop.size());
      pos += t.BoxNameColorTop.size();
    }
  }
  {
    // std::string BoxNameColorDown; // string, field number = 8
    if (!t.BoxNameColorDown.empty()) {
      serialize_varint(data, pos, size, 66);
      serialize_varint(data, pos, size, t.BoxNameColorDown.size());
      std::memcpy(data + pos, t.BoxNameColorDown.data(), t.BoxNameColorDown.size());
      pos += t.BoxNameColorDown.size();
    }
  }
  {
    // std::string BoxNameOutlineColor; // string, field number = 9
    if (!t.BoxNameOutlineColor.empty()) {
      serialize_varint(data, pos, size, 74);
      serialize_varint(data, pos, size, t.BoxNameOutlineColor.size());
      std::memcpy(data + pos, t.BoxNameOutlineColor.data(), t.BoxNameOutlineColor.size());
      pos += t.BoxNameOutlineColor.size();
    }
  }
  {
    // std::string BoxDesc; // string, field number = 10
    if (!t.BoxDesc.empty()) {
      serialize_varint(data, pos, size, 82);
      serialize_varint(data, pos, size, t.BoxDesc.size());
      std::memcpy(data + pos, t.BoxDesc.data(), t.BoxDesc.size());
      pos += t.BoxDesc.size();
    }
  }
  {
    // std::string BoxDescColor; // string, field number = 11
    if (!t.BoxDescColor.empty()) {
      serialize_varint(data, pos, size, 90);
      serialize_varint(data, pos, size, t.BoxDescColor.size());
      std::memcpy(data + pos, t.BoxDescColor.data(), t.BoxDescColor.size());
      pos += t.BoxDescColor.size();
    }
  }
  {
    // std::string BoxDescOutlineColor; // string, field number = 12
    if (!t.BoxDescOutlineColor.empty()) {
      serialize_varint(data, pos, size, 98);
      serialize_varint(data, pos, size, t.BoxDescOutlineColor.size());
      std::memcpy(data + pos, t.BoxDescOutlineColor.data(), t.BoxDescOutlineColor.size());
      pos += t.BoxDescOutlineColor.size();
    }
  }
  {
    // std::string BoxIcon; // string, field number = 13
    if (!t.BoxIcon.empty()) {
      serialize_varint(data, pos, size, 106);
      serialize_varint(data, pos, size, t.BoxIcon.size());
      std::memcpy(data + pos, t.BoxIcon.data(), t.BoxIcon.size());
      pos += t.BoxIcon.size();
    }
  }
  {
    // int32_t BoxPortrait; // int32, field number = 14
    if (t.BoxPortrait != 0) {
      serialize_varint(data, pos, size, 112);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.BoxPortrait));
    }
  }
  {
    // std::string BoxBg; // string, field number = 15
    if (!t.BoxBg.empty()) {
      serialize_varint(data, pos, size, 122);
      serialize_varint(data, pos, size, t.BoxBg.size());
      std::memcpy(data + pos, t.BoxBg.data(), t.BoxBg.size());
      pos += t.BoxBg.size();
    }
  }
  {
    // std::string EntranceIcon; // string, field number = 16
    if (!t.EntranceIcon.empty()) {
      serialize_varint(data, pos, size, 130);
      serialize_varint(data, pos, size, t.EntranceIcon.size());
      std::memcpy(data + pos, t.EntranceIcon.data(), t.EntranceIcon.size());
      pos += t.EntranceIcon.size();
    }
  }
  {
    // int32_t DrawCardPanelType; // int32, field number = 17
    if (t.DrawCardPanelType != 0) {
      serialize_varint(data, pos, size, 136);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.DrawCardPanelType));
    }
  }
  {
    // int32_t CostItemID; // int32, field number = 18
    if (t.CostItemID != 0) {
      serialize_varint(data, pos, size, 144);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.CostItemID));
    }
  }
  {
    // int32_t CostItemCnt; // int32, field number = 19
    if (t.CostItemCnt != 0) {
      serialize_varint(data, pos, size, 152);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.CostItemCnt));
    }
  }
  {
    // int32_t CostMoneyType; // int32, field number = 20
    if (t.CostMoneyType != 0) {
      serialize_varint(data, pos, size, 160);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.CostMoneyType));
    }
  }
  {
    // int32_t CostMoneyCnt; // int32, field number = 21
    if (t.CostMoneyCnt != 0) {
      serialize_varint(data, pos, size, 168);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.CostMoneyCnt));
    }
  }
  {
    // int32_t FreeRefreshint32erval; // int32, field number = 22
    if (t.FreeRefreshint32erval != 0) {
      serialize_varint(data, pos, size, 176);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.FreeRefreshint32erval));
    }
  }
  {
    // int32_t FirstBooty; // int32, field number = 23
    if (t.FirstBooty != 0) {
      serialize_varint(data, pos, size, 184);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.FirstBooty));
    }
  }
  {
    // int32_t CostBootyID; // int32, field number = 24
    if (t.CostBootyID != 0) {
      serialize_varint(data, pos, size, 192);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.CostBootyID));
    }
  }
  {
    // int32_t TenCostItemID; // int32, field number = 25
    if (t.TenCostItemID != 0) {
      serialize_varint(data, pos, size, 200);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.TenCostItemID));
    }
  }
  {
    // int32_t TenCostItemCnt; // int32, field number = 26
    if (t.TenCostItemCnt != 0) {
      serialize_varint(data, pos, size, 208);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.TenCostItemCnt));
    }
  }
  {
    // int32_t TenCostMoneyType; // int32, field number = 27
    if (t.TenCostMoneyType != 0) {
      serialize_varint(data, pos, size, 216);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.TenCostMoneyType));
    }
  }
  {
    // int32_t TenCostMoneyCnt; // int32, field number = 28
    if (t.TenCostMoneyCnt != 0) {
      serialize_varint(data, pos, size, 224);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.TenCostMoneyCnt));
    }
  }
  {
    // int32_t TenCostBootyID; // int32, field number = 29
    if (t.TenCostBootyID != 0) {
      serialize_varint(data, pos, size, 232);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.TenCostBootyID));
    }
  }
  {
    // float TenDiscount; // float, field number = 30
    if (t.TenDiscount != 0) {
      serialize_varint(data, pos, size, 245);

      std::memcpy(data + pos, &t.TenDiscount, 4);
      pos += 4;

    }
  }
  {
    // int32_t Replenish; // int32, field number = 31
    if (t.Replenish != 0) {
      serialize_varint(data, pos, size, 248);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.Replenish));
    }
  }
  {
    // int32_t EnsureShowBootyID; // int32, field number = 32
    if (t.EnsureShowBootyID != 0) {
      serialize_varint(data, pos, size, 256);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.EnsureShowBootyID));
    }
  }
  {
    // int32_t UnLockWishHeroCnt; // int32, field number = 33
    if (t.UnLockWishHeroCnt != 0) {
      serialize_varint(data, pos, size, 264);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.UnLockWishHeroCnt));
    }
  }
  {
    // int32_t UnLockWishBlessHeroCnt; // int32, field number = 34
    if (t.UnLockWishBlessHeroCnt != 0) {
      serialize_varint(data, pos, size, 272);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.UnLockWishBlessHeroCnt));
    }
  }
  {
    // int32_t BlessingCnt; // int32, field number = 35
    if (t.BlessingCnt != 0) {
      serialize_varint(data, pos, size, 280);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.BlessingCnt));
    }
  }
  {
    // int32_t RuleTextID; // int32, field number = 36
    if (t.RuleTextID != 0) {
      serialize_varint(data, pos, size, 288);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.RuleTextID));
    }
  }
  {
    // int32_t CardPoolID; // int32, field number = 37
    if (t.CardPoolID != 0) {
      serialize_varint(data, pos, size, 296);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.CardPoolID));
    }
  }
  {
    // int32_t WishPoolID; // int32, field number = 38
    if (t.WishPoolID != 0) {
      serialize_varint(data, pos, size, 304);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.WishPoolID));
    }
  }
  {
    // int32_t UPPoolID; // int32, field number = 39
    if (t.UPPoolID != 0) {
      serialize_varint(data, pos, size, 312);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.UPPoolID));
    }
  }
  unknown_fields.serialize_to(data, pos, size);
} // void serialize_to<::resource::BuyBoxConfig>(char* data, std::size_t size, const ::resource::BuyBoxConfig& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
bool deserialize_to<::resource::BuyBoxConfig>(::resource::BuyBoxConfig& t, const char* data, std::size_t size, ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  bool ok = false;
  while (pos < size) {
    uint64_t tag = 0;
    ok = read_tag(data, pos, size, tag);
    if (!ok) {
      return false;
    }
    switch(tag) {
      // int32_t BoxType; // int32, field number = 1
      case 8: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.BoxType = varint_tmp;
        break;
      }
      // int32_t BoxID; // int32, field number = 2
      case 16: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.BoxID = varint_tmp;
        break;
      }
      // int32_t ActivitySubID; // int32, field number = 3
      case 24: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.ActivitySubID = varint_tmp;
        break;
      }
      // int32_t SortID; // int32, field number = 4
      case 32: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.SortID = varint_tmp;
        break;
      }
      // int32_t UnlockLv; // int32, field number = 5
      case 40: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.UnlockLv = varint_tmp;
        break;
      }
      // std::string BoxName; // string, field number = 6
      case 50: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.BoxName.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.BoxName.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string BoxNameColorTop; // string, field number = 7
      case 58: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.BoxNameColorTop.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.BoxNameColorTop.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string BoxNameColorDown; // string, field number = 8
      case 66: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.BoxNameColorDown.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.BoxNameColorDown.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string BoxNameOutlineColor; // string, field number = 9
      case 74: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.BoxNameOutlineColor.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.BoxNameOutlineColor.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string BoxDesc; // string, field number = 10
      case 82: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.BoxDesc.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.BoxDesc.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string BoxDescColor; // string, field number = 11
      case 90: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.BoxDescColor.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.BoxDescColor.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string BoxDescOutlineColor; // string, field number = 12
      case 98: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.BoxDescOutlineColor.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.BoxDescOutlineColor.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string BoxIcon; // string, field number = 13
      case 106: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.BoxIcon.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.BoxIcon.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // int32_t BoxPortrait; // int32, field number = 14
      case 112: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.BoxPortrait = varint_tmp;
        break;
      }
      // std::string BoxBg; // string, field number = 15
      case 122: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.BoxBg.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.BoxBg.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string EntranceIcon; // string, field number = 16
      case 130: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.EntranceIcon.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.EntranceIcon.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // int32_t DrawCardPanelType; // int32, field number = 17
      case 136: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.DrawCardPanelType = varint_tmp;
        break;
      }
      // int32_t CostItemID; // int32, field number = 18
      case 144: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.CostItemID = varint_tmp;
        break;
      }
      // int32_t CostItemCnt; // int32, field number = 19
      case 152: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.CostItemCnt = varint_tmp;
        break;
      }
      // int32_t CostMoneyType; // int32, field number = 20
      case 160: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.CostMoneyType = varint_tmp;
        break;
      }
      // int32_t CostMoneyCnt; // int32, field number = 21
      case 168: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.CostMoneyCnt = varint_tmp;
        break;
      }
      // int32_t FreeRefreshint32erval; // int32, field number = 22
      case 176: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.FreeRefreshint32erval = varint_tmp;
        break;
      }
      // int32_t FirstBooty; // int32, field number = 23
      case 184: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.FirstBooty = varint_tmp;
        break;
      }
      // int32_t CostBootyID; // int32, field number = 24
      case 192: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.CostBootyID = varint_tmp;
        break;
      }
      // int32_t TenCostItemID; // int32, field number = 25
      case 200: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.TenCostItemID = varint_tmp;
        break;
      }
      // int32_t TenCostItemCnt; // int32, field number = 26
      case 208: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.TenCostItemCnt = varint_tmp;
        break;
      }
      // int32_t TenCostMoneyType; // int32, field number = 27
      case 216: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.TenCostMoneyType = varint_tmp;
        break;
      }
      // int32_t TenCostMoneyCnt; // int32, field number = 28
      case 224: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.TenCostMoneyCnt = varint_tmp;
        break;
      }
      // int32_t TenCostBootyID; // int32, field number = 29
      case 232: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.TenCostBootyID = varint_tmp;
        break;
      }
      // float TenDiscount; // float, field number = 30
      case 245: {

        if (pos + 4 > size) {
          return false;
        }
        float fixed_tmp = 0;
        std::memcpy(&fixed_tmp, data + pos, 4);
        pos += 4;
        t.TenDiscount = fixed_tmp;
        break;
      }
      // int32_t Replenish; // int32, field number = 31
      case 248: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.Replenish = varint_tmp;
        break;
      }
      // int32_t EnsureShowBootyID; // int32, field number = 32
      case 256: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.EnsureShowBootyID = varint_tmp;
        break;
      }
      // int32_t UnLockWishHeroCnt; // int32, field number = 33
      case 264: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.UnLockWishHeroCnt = varint_tmp;
        break;
      }
      // int32_t UnLockWishBlessHeroCnt; // int32, field number = 34
      case 272: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.UnLockWishBlessHeroCnt = varint_tmp;
        break;
      }
      // int32_t BlessingCnt; // int32, field number = 35
      case 280: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.BlessingCnt = varint_tmp;
        break;
      }
      // int32_t RuleTextID; // int32, field number = 36
      case 288: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.RuleTextID = varint_tmp;
        break;
      }
      // int32_t CardPoolID; // int32, field number = 37
      case 296: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.CardPoolID = varint_tmp;
        break;
      }
      // int32_t WishPoolID; // int32, field number = 38
      case 304: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.WishPoolID = varint_tmp;
        break;
      }
      // int32_t UPPoolID; // int32, field number = 39
      case 312: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.UPPoolID = varint_tmp;
        break;
      }
      default: {
        ok = deserialize_unknown(data, pos, size, tag, unknown_fields);
        return ok;
      }
    }
  }
return true;
} // bool deserialize_to<::resource::BuyBoxConfig>(::resource::BuyBoxConfig&, const char*, std::size_t)
// end of ::resource::BuyBoxConfig
template<>
bool deserialize_to<::resource::BuyBoxConfig>(::resource::BuyBoxConfig& t, const char* data, std::size_t size) {
  ::struct_pb::UnknownFields unknown_fields{};
  return deserialize_to(t,data,size,unknown_fields);
}

// ::resource::BuyBoxConfigList
template<>
std::size_t get_needed_size<::resource::BuyBoxConfigList>(const ::resource::BuyBoxConfigList& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t total = unknown_fields.total_size();
  if (!t.data.empty()) {

    for(const auto& e: t.data) {
      std::size_t sz = get_needed_size(e);
      total += 1 + calculate_varint_size(sz) + sz;
    }
  }
  return total;
} // std::size_t get_needed_size<::resource::BuyBoxConfigList>(const ::resource::BuyBoxConfigList& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
void serialize_to<::resource::BuyBoxConfigList>(char* data, std::size_t size, const ::resource::BuyBoxConfigList& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  {
    // std::vector<::resource::BuyBoxConfig> data; // message, field number = 1
    if (!t.data.empty()) {

      for(const auto& e: t.data) {
        serialize_varint(data, pos, size, 10);
        std::size_t sz = get_needed_size(e);
        serialize_varint(data, pos, size, sz);
        serialize_to(data+pos, sz, e);
        pos += sz;
      }
    }
  }
  unknown_fields.serialize_to(data, pos, size);
} // void serialize_to<::resource::BuyBoxConfigList>(char* data, std::size_t size, const ::resource::BuyBoxConfigList& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
bool deserialize_to<::resource::BuyBoxConfigList>(::resource::BuyBoxConfigList& t, const char* data, std::size_t size, ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  bool ok = false;
  while (pos < size) {
    uint64_t tag = 0;
    ok = read_tag(data, pos, size, tag);
    if (!ok) {
      return false;
    }
    switch(tag) {
      // std::vector<::resource::BuyBoxConfig> data; // message, field number = 1
      case 10: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.data.emplace_back();
        ok = deserialize_to(t.data.back(), data + pos, sz);
        if (!ok) {
          t.data.pop_back();
          return false;
        }
        pos += sz;
        break;
      }
      default: {
        ok = deserialize_unknown(data, pos, size, tag, unknown_fields);
        return ok;
      }
    }
  }
return true;
} // bool deserialize_to<::resource::BuyBoxConfigList>(::resource::BuyBoxConfigList&, const char*, std::size_t)
// end of ::resource::BuyBoxConfigList
template<>
bool deserialize_to<::resource::BuyBoxConfigList>(::resource::BuyBoxConfigList& t, const char* data, std::size_t size) {
  ::struct_pb::UnknownFields unknown_fields{};
  return deserialize_to(t,data,size,unknown_fields);
}

// ::resource::BuyBoxChanceConfig
template<>
std::size_t get_needed_size<::resource::BuyBoxChanceConfig>(const ::resource::BuyBoxChanceConfig& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t total = unknown_fields.total_size();
  if (t.CardPoolID != 0) {
    total += 1 + calculate_varint_size(t.CardPoolID);
  }
  if (t.HeroStar != 0) {
    total += 1 + calculate_varint_size(t.HeroStar);
  }
  if (t.HeroID != 0) {
    total += 1 + calculate_varint_size(t.HeroID);
  }
  if (t.Chance != 0) {
    total += 1 + 4;
  }
  return total;
} // std::size_t get_needed_size<::resource::BuyBoxChanceConfig>(const ::resource::BuyBoxChanceConfig& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
void serialize_to<::resource::BuyBoxChanceConfig>(char* data, std::size_t size, const ::resource::BuyBoxChanceConfig& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  {
    // int32_t CardPoolID; // int32, field number = 1
    if (t.CardPoolID != 0) {
      serialize_varint(data, pos, size, 8);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.CardPoolID));
    }
  }
  {
    // int32_t HeroStar; // int32, field number = 2
    if (t.HeroStar != 0) {
      serialize_varint(data, pos, size, 16);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.HeroStar));
    }
  }
  {
    // int32_t HeroID; // int32, field number = 3
    if (t.HeroID != 0) {
      serialize_varint(data, pos, size, 24);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.HeroID));
    }
  }
  {
    // float Chance; // float, field number = 4
    if (t.Chance != 0) {
      serialize_varint(data, pos, size, 37);

      std::memcpy(data + pos, &t.Chance, 4);
      pos += 4;

    }
  }
  unknown_fields.serialize_to(data, pos, size);
} // void serialize_to<::resource::BuyBoxChanceConfig>(char* data, std::size_t size, const ::resource::BuyBoxChanceConfig& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
bool deserialize_to<::resource::BuyBoxChanceConfig>(::resource::BuyBoxChanceConfig& t, const char* data, std::size_t size, ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  bool ok = false;
  while (pos < size) {
    uint64_t tag = 0;
    ok = read_tag(data, pos, size, tag);
    if (!ok) {
      return false;
    }
    switch(tag) {
      // int32_t CardPoolID; // int32, field number = 1
      case 8: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.CardPoolID = varint_tmp;
        break;
      }
      // int32_t HeroStar; // int32, field number = 2
      case 16: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.HeroStar = varint_tmp;
        break;
      }
      // int32_t HeroID; // int32, field number = 3
      case 24: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.HeroID = varint_tmp;
        break;
      }
      // float Chance; // float, field number = 4
      case 37: {

        if (pos + 4 > size) {
          return false;
        }
        float fixed_tmp = 0;
        std::memcpy(&fixed_tmp, data + pos, 4);
        pos += 4;
        t.Chance = fixed_tmp;
        break;
      }
      default: {
        ok = deserialize_unknown(data, pos, size, tag, unknown_fields);
        return ok;
      }
    }
  }
return true;
} // bool deserialize_to<::resource::BuyBoxChanceConfig>(::resource::BuyBoxChanceConfig&, const char*, std::size_t)
// end of ::resource::BuyBoxChanceConfig
template<>
bool deserialize_to<::resource::BuyBoxChanceConfig>(::resource::BuyBoxChanceConfig& t, const char* data, std::size_t size) {
  ::struct_pb::UnknownFields unknown_fields{};
  return deserialize_to(t,data,size,unknown_fields);
}

// ::resource::BuyBoxChanceConfigList
template<>
std::size_t get_needed_size<::resource::BuyBoxChanceConfigList>(const ::resource::BuyBoxChanceConfigList& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t total = unknown_fields.total_size();
  if (!t.data.empty()) {

    for(const auto& e: t.data) {
      std::size_t sz = get_needed_size(e);
      total += 1 + calculate_varint_size(sz) + sz;
    }
  }
  return total;
} // std::size_t get_needed_size<::resource::BuyBoxChanceConfigList>(const ::resource::BuyBoxChanceConfigList& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
void serialize_to<::resource::BuyBoxChanceConfigList>(char* data, std::size_t size, const ::resource::BuyBoxChanceConfigList& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  {
    // std::vector<::resource::BuyBoxChanceConfig> data; // message, field number = 1
    if (!t.data.empty()) {

      for(const auto& e: t.data) {
        serialize_varint(data, pos, size, 10);
        std::size_t sz = get_needed_size(e);
        serialize_varint(data, pos, size, sz);
        serialize_to(data+pos, sz, e);
        pos += sz;
      }
    }
  }
  unknown_fields.serialize_to(data, pos, size);
} // void serialize_to<::resource::BuyBoxChanceConfigList>(char* data, std::size_t size, const ::resource::BuyBoxChanceConfigList& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
bool deserialize_to<::resource::BuyBoxChanceConfigList>(::resource::BuyBoxChanceConfigList& t, const char* data, std::size_t size, ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  bool ok = false;
  while (pos < size) {
    uint64_t tag = 0;
    ok = read_tag(data, pos, size, tag);
    if (!ok) {
      return false;
    }
    switch(tag) {
      // std::vector<::resource::BuyBoxChanceConfig> data; // message, field number = 1
      case 10: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.data.emplace_back();
        ok = deserialize_to(t.data.back(), data + pos, sz);
        if (!ok) {
          t.data.pop_back();
          return false;
        }
        pos += sz;
        break;
      }
      default: {
        ok = deserialize_unknown(data, pos, size, tag, unknown_fields);
        return ok;
      }
    }
  }
return true;
} // bool deserialize_to<::resource::BuyBoxChanceConfigList>(::resource::BuyBoxChanceConfigList&, const char*, std::size_t)
// end of ::resource::BuyBoxChanceConfigList
template<>
bool deserialize_to<::resource::BuyBoxChanceConfigList>(::resource::BuyBoxChanceConfigList& t, const char* data, std::size_t size) {
  ::struct_pb::UnknownFields unknown_fields{};
  return deserialize_to(t,data,size,unknown_fields);
}

// ::resource::BuyBoxWishConfig
template<>
std::size_t get_needed_size<::resource::BuyBoxWishConfig>(const ::resource::BuyBoxWishConfig& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t total = unknown_fields.total_size();
  if (t.WishPoolID != 0) {
    total += 1 + calculate_varint_size(t.WishPoolID);
  }
  if (t.HeroID != 0) {
    total += 1 + calculate_varint_size(t.HeroID);
  }
  if (t.CoreFlag != 0) {
    total += 1 + calculate_varint_size(t.CoreFlag);
  }
  return total;
} // std::size_t get_needed_size<::resource::BuyBoxWishConfig>(const ::resource::BuyBoxWishConfig& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
void serialize_to<::resource::BuyBoxWishConfig>(char* data, std::size_t size, const ::resource::BuyBoxWishConfig& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  {
    // int32_t WishPoolID; // int32, field number = 1
    if (t.WishPoolID != 0) {
      serialize_varint(data, pos, size, 8);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.WishPoolID));
    }
  }
  {
    // int32_t HeroID; // int32, field number = 2
    if (t.HeroID != 0) {
      serialize_varint(data, pos, size, 16);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.HeroID));
    }
  }
  {
    // int32_t CoreFlag; // int32, field number = 3
    if (t.CoreFlag != 0) {
      serialize_varint(data, pos, size, 24);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.CoreFlag));
    }
  }
  unknown_fields.serialize_to(data, pos, size);
} // void serialize_to<::resource::BuyBoxWishConfig>(char* data, std::size_t size, const ::resource::BuyBoxWishConfig& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
bool deserialize_to<::resource::BuyBoxWishConfig>(::resource::BuyBoxWishConfig& t, const char* data, std::size_t size, ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  bool ok = false;
  while (pos < size) {
    uint64_t tag = 0;
    ok = read_tag(data, pos, size, tag);
    if (!ok) {
      return false;
    }
    switch(tag) {
      // int32_t WishPoolID; // int32, field number = 1
      case 8: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.WishPoolID = varint_tmp;
        break;
      }
      // int32_t HeroID; // int32, field number = 2
      case 16: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.HeroID = varint_tmp;
        break;
      }
      // int32_t CoreFlag; // int32, field number = 3
      case 24: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.CoreFlag = varint_tmp;
        break;
      }
      default: {
        ok = deserialize_unknown(data, pos, size, tag, unknown_fields);
        return ok;
      }
    }
  }
return true;
} // bool deserialize_to<::resource::BuyBoxWishConfig>(::resource::BuyBoxWishConfig&, const char*, std::size_t)
// end of ::resource::BuyBoxWishConfig
template<>
bool deserialize_to<::resource::BuyBoxWishConfig>(::resource::BuyBoxWishConfig& t, const char* data, std::size_t size) {
  ::struct_pb::UnknownFields unknown_fields{};
  return deserialize_to(t,data,size,unknown_fields);
}

// ::resource::BuyBoxWishConfigList
template<>
std::size_t get_needed_size<::resource::BuyBoxWishConfigList>(const ::resource::BuyBoxWishConfigList& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t total = unknown_fields.total_size();
  if (!t.data.empty()) {

    for(const auto& e: t.data) {
      std::size_t sz = get_needed_size(e);
      total += 1 + calculate_varint_size(sz) + sz;
    }
  }
  return total;
} // std::size_t get_needed_size<::resource::BuyBoxWishConfigList>(const ::resource::BuyBoxWishConfigList& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
void serialize_to<::resource::BuyBoxWishConfigList>(char* data, std::size_t size, const ::resource::BuyBoxWishConfigList& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  {
    // std::vector<::resource::BuyBoxWishConfig> data; // message, field number = 1
    if (!t.data.empty()) {

      for(const auto& e: t.data) {
        serialize_varint(data, pos, size, 10);
        std::size_t sz = get_needed_size(e);
        serialize_varint(data, pos, size, sz);
        serialize_to(data+pos, sz, e);
        pos += sz;
      }
    }
  }
  unknown_fields.serialize_to(data, pos, size);
} // void serialize_to<::resource::BuyBoxWishConfigList>(char* data, std::size_t size, const ::resource::BuyBoxWishConfigList& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
bool deserialize_to<::resource::BuyBoxWishConfigList>(::resource::BuyBoxWishConfigList& t, const char* data, std::size_t size, ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  bool ok = false;
  while (pos < size) {
    uint64_t tag = 0;
    ok = read_tag(data, pos, size, tag);
    if (!ok) {
      return false;
    }
    switch(tag) {
      // std::vector<::resource::BuyBoxWishConfig> data; // message, field number = 1
      case 10: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.data.emplace_back();
        ok = deserialize_to(t.data.back(), data + pos, sz);
        if (!ok) {
          t.data.pop_back();
          return false;
        }
        pos += sz;
        break;
      }
      default: {
        ok = deserialize_unknown(data, pos, size, tag, unknown_fields);
        return ok;
      }
    }
  }
return true;
} // bool deserialize_to<::resource::BuyBoxWishConfigList>(::resource::BuyBoxWishConfigList&, const char*, std::size_t)
// end of ::resource::BuyBoxWishConfigList
template<>
bool deserialize_to<::resource::BuyBoxWishConfigList>(::resource::BuyBoxWishConfigList& t, const char* data, std::size_t size) {
  ::struct_pb::UnknownFields unknown_fields{};
  return deserialize_to(t,data,size,unknown_fields);
}

// ::resource::UpBoxConfig
template<>
std::size_t get_needed_size<::resource::UpBoxConfig>(const ::resource::UpBoxConfig& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t total = unknown_fields.total_size();
  if (t.UPPoolID != 0) {
    total += 1 + calculate_varint_size(t.UPPoolID);
  }
  if (t.HeroID != 0) {
    total += 1 + calculate_varint_size(t.HeroID);
  }
  if (!t.HeroBg.empty()) {
    total += 1 + calculate_varint_size(t.HeroBg.size()) + t.HeroBg.size();
  }
  if (t.HeroModel != 0) {
    total += 1 + calculate_varint_size(t.HeroModel);
  }
  if (!t.HeroNameBg.empty()) {
    total += 1 + calculate_varint_size(t.HeroNameBg.size()) + t.HeroNameBg.size();
  }
  if (!t.DescText.empty()) {
    total += 1 + calculate_varint_size(t.DescText.size()) + t.DescText.size();
  }
  if (!t.DescTextColor.empty()) {
    total += 1 + calculate_varint_size(t.DescTextColor.size()) + t.DescTextColor.size();
  }
  if (t.DescPosX != 0) {
    total += 1 + 4;
  }
  if (t.DescPosY != 0) {
    total += 1 + 4;
  }
  if (!t.HeroDescBg.empty()) {
    total += 1 + calculate_varint_size(t.HeroDescBg.size()) + t.HeroDescBg.size();
  }
  if (!t.EnsureBg.empty()) {
    total += 1 + calculate_varint_size(t.EnsureBg.size()) + t.EnsureBg.size();
  }
  if (!t.EnsureDescOutlineColor.empty()) {
    total += 1 + calculate_varint_size(t.EnsureDescOutlineColor.size()) + t.EnsureDescOutlineColor.size();
  }
  if (!t.EnsureDescColorTop.empty()) {
    total += 1 + calculate_varint_size(t.EnsureDescColorTop.size()) + t.EnsureDescColorTop.size();
  }
  if (!t.EnsureDescColorDown.empty()) {
    total += 1 + calculate_varint_size(t.EnsureDescColorDown.size()) + t.EnsureDescColorDown.size();
  }
  if (!t.SingleDrawBtnImg.empty()) {
    total += 1 + calculate_varint_size(t.SingleDrawBtnImg.size()) + t.SingleDrawBtnImg.size();
  }
  if (t.EnsureID != 0) {
    total += 2 + calculate_varint_size(t.EnsureID);
  }
  if (t.CostBootyID != 0) {
    total += 2 + calculate_varint_size(t.CostBootyID);
  }
  if (t.MinEnsureID != 0) {
    total += 2 + calculate_varint_size(t.MinEnsureID);
  }
  return total;
} // std::size_t get_needed_size<::resource::UpBoxConfig>(const ::resource::UpBoxConfig& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
void serialize_to<::resource::UpBoxConfig>(char* data, std::size_t size, const ::resource::UpBoxConfig& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  {
    // int32_t UPPoolID; // int32, field number = 1
    if (t.UPPoolID != 0) {
      serialize_varint(data, pos, size, 8);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.UPPoolID));
    }
  }
  {
    // int32_t HeroID; // int32, field number = 2
    if (t.HeroID != 0) {
      serialize_varint(data, pos, size, 16);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.HeroID));
    }
  }
  {
    // std::string HeroBg; // string, field number = 3
    if (!t.HeroBg.empty()) {
      serialize_varint(data, pos, size, 26);
      serialize_varint(data, pos, size, t.HeroBg.size());
      std::memcpy(data + pos, t.HeroBg.data(), t.HeroBg.size());
      pos += t.HeroBg.size();
    }
  }
  {
    // int32_t HeroModel; // int32, field number = 4
    if (t.HeroModel != 0) {
      serialize_varint(data, pos, size, 32);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.HeroModel));
    }
  }
  {
    // std::string HeroNameBg; // string, field number = 5
    if (!t.HeroNameBg.empty()) {
      serialize_varint(data, pos, size, 42);
      serialize_varint(data, pos, size, t.HeroNameBg.size());
      std::memcpy(data + pos, t.HeroNameBg.data(), t.HeroNameBg.size());
      pos += t.HeroNameBg.size();
    }
  }
  {
    // std::string DescText; // string, field number = 6
    if (!t.DescText.empty()) {
      serialize_varint(data, pos, size, 50);
      serialize_varint(data, pos, size, t.DescText.size());
      std::memcpy(data + pos, t.DescText.data(), t.DescText.size());
      pos += t.DescText.size();
    }
  }
  {
    // std::string DescTextColor; // string, field number = 7
    if (!t.DescTextColor.empty()) {
      serialize_varint(data, pos, size, 58);
      serialize_varint(data, pos, size, t.DescTextColor.size());
      std::memcpy(data + pos, t.DescTextColor.data(), t.DescTextColor.size());
      pos += t.DescTextColor.size();
    }
  }
  {
    // float DescPosX; // float, field number = 8
    if (t.DescPosX != 0) {
      serialize_varint(data, pos, size, 69);

      std::memcpy(data + pos, &t.DescPosX, 4);
      pos += 4;

    }
  }
  {
    // float DescPosY; // float, field number = 9
    if (t.DescPosY != 0) {
      serialize_varint(data, pos, size, 77);

      std::memcpy(data + pos, &t.DescPosY, 4);
      pos += 4;

    }
  }
  {
    // std::string HeroDescBg; // string, field number = 10
    if (!t.HeroDescBg.empty()) {
      serialize_varint(data, pos, size, 82);
      serialize_varint(data, pos, size, t.HeroDescBg.size());
      std::memcpy(data + pos, t.HeroDescBg.data(), t.HeroDescBg.size());
      pos += t.HeroDescBg.size();
    }
  }
  {
    // std::string EnsureBg; // string, field number = 11
    if (!t.EnsureBg.empty()) {
      serialize_varint(data, pos, size, 90);
      serialize_varint(data, pos, size, t.EnsureBg.size());
      std::memcpy(data + pos, t.EnsureBg.data(), t.EnsureBg.size());
      pos += t.EnsureBg.size();
    }
  }
  {
    // std::string EnsureDescOutlineColor; // string, field number = 12
    if (!t.EnsureDescOutlineColor.empty()) {
      serialize_varint(data, pos, size, 98);
      serialize_varint(data, pos, size, t.EnsureDescOutlineColor.size());
      std::memcpy(data + pos, t.EnsureDescOutlineColor.data(), t.EnsureDescOutlineColor.size());
      pos += t.EnsureDescOutlineColor.size();
    }
  }
  {
    // std::string EnsureDescColorTop; // string, field number = 13
    if (!t.EnsureDescColorTop.empty()) {
      serialize_varint(data, pos, size, 106);
      serialize_varint(data, pos, size, t.EnsureDescColorTop.size());
      std::memcpy(data + pos, t.EnsureDescColorTop.data(), t.EnsureDescColorTop.size());
      pos += t.EnsureDescColorTop.size();
    }
  }
  {
    // std::string EnsureDescColorDown; // string, field number = 14
    if (!t.EnsureDescColorDown.empty()) {
      serialize_varint(data, pos, size, 114);
      serialize_varint(data, pos, size, t.EnsureDescColorDown.size());
      std::memcpy(data + pos, t.EnsureDescColorDown.data(), t.EnsureDescColorDown.size());
      pos += t.EnsureDescColorDown.size();
    }
  }
  {
    // std::string SingleDrawBtnImg; // string, field number = 15
    if (!t.SingleDrawBtnImg.empty()) {
      serialize_varint(data, pos, size, 122);
      serialize_varint(data, pos, size, t.SingleDrawBtnImg.size());
      std::memcpy(data + pos, t.SingleDrawBtnImg.data(), t.SingleDrawBtnImg.size());
      pos += t.SingleDrawBtnImg.size();
    }
  }
  {
    // int32_t EnsureID; // int32, field number = 16
    if (t.EnsureID != 0) {
      serialize_varint(data, pos, size, 128);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.EnsureID));
    }
  }
  {
    // int32_t CostBootyID; // int32, field number = 17
    if (t.CostBootyID != 0) {
      serialize_varint(data, pos, size, 136);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.CostBootyID));
    }
  }
  {
    // int32_t MinEnsureID; // int32, field number = 18
    if (t.MinEnsureID != 0) {
      serialize_varint(data, pos, size, 144);
      serialize_varint(data, pos, size, static_cast<uint64_t>(t.MinEnsureID));
    }
  }
  unknown_fields.serialize_to(data, pos, size);
} // void serialize_to<::resource::UpBoxConfig>(char* data, std::size_t size, const ::resource::UpBoxConfig& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
bool deserialize_to<::resource::UpBoxConfig>(::resource::UpBoxConfig& t, const char* data, std::size_t size, ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  bool ok = false;
  while (pos < size) {
    uint64_t tag = 0;
    ok = read_tag(data, pos, size, tag);
    if (!ok) {
      return false;
    }
    switch(tag) {
      // int32_t UPPoolID; // int32, field number = 1
      case 8: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.UPPoolID = varint_tmp;
        break;
      }
      // int32_t HeroID; // int32, field number = 2
      case 16: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.HeroID = varint_tmp;
        break;
      }
      // std::string HeroBg; // string, field number = 3
      case 26: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.HeroBg.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.HeroBg.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // int32_t HeroModel; // int32, field number = 4
      case 32: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.HeroModel = varint_tmp;
        break;
      }
      // std::string HeroNameBg; // string, field number = 5
      case 42: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.HeroNameBg.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.HeroNameBg.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string DescText; // string, field number = 6
      case 50: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.DescText.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.DescText.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string DescTextColor; // string, field number = 7
      case 58: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.DescTextColor.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.DescTextColor.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // float DescPosX; // float, field number = 8
      case 69: {

        if (pos + 4 > size) {
          return false;
        }
        float fixed_tmp = 0;
        std::memcpy(&fixed_tmp, data + pos, 4);
        pos += 4;
        t.DescPosX = fixed_tmp;
        break;
      }
      // float DescPosY; // float, field number = 9
      case 77: {

        if (pos + 4 > size) {
          return false;
        }
        float fixed_tmp = 0;
        std::memcpy(&fixed_tmp, data + pos, 4);
        pos += 4;
        t.DescPosY = fixed_tmp;
        break;
      }
      // std::string HeroDescBg; // string, field number = 10
      case 82: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.HeroDescBg.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.HeroDescBg.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string EnsureBg; // string, field number = 11
      case 90: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.EnsureBg.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.EnsureBg.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string EnsureDescOutlineColor; // string, field number = 12
      case 98: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.EnsureDescOutlineColor.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.EnsureDescOutlineColor.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string EnsureDescColorTop; // string, field number = 13
      case 106: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.EnsureDescColorTop.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.EnsureDescColorTop.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string EnsureDescColorDown; // string, field number = 14
      case 114: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.EnsureDescColorDown.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.EnsureDescColorDown.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // std::string SingleDrawBtnImg; // string, field number = 15
      case 122: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.SingleDrawBtnImg.resize(sz);
        if (pos + sz > size) {
          return false;
        }
        std::memcpy(t.SingleDrawBtnImg.data(), data+pos, sz);
        pos += sz;
        break;
      }
      // int32_t EnsureID; // int32, field number = 16
      case 128: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.EnsureID = varint_tmp;
        break;
      }
      // int32_t CostBootyID; // int32, field number = 17
      case 136: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.CostBootyID = varint_tmp;
        break;
      }
      // int32_t MinEnsureID; // int32, field number = 18
      case 144: {

        uint64_t varint_tmp = 0;
        ok = deserialize_varint(data, pos, size, varint_tmp);
        if (!ok) {
          return false;
        }

        t.MinEnsureID = varint_tmp;
        break;
      }
      default: {
        ok = deserialize_unknown(data, pos, size, tag, unknown_fields);
        return ok;
      }
    }
  }
return true;
} // bool deserialize_to<::resource::UpBoxConfig>(::resource::UpBoxConfig&, const char*, std::size_t)
// end of ::resource::UpBoxConfig
template<>
bool deserialize_to<::resource::UpBoxConfig>(::resource::UpBoxConfig& t, const char* data, std::size_t size) {
  ::struct_pb::UnknownFields unknown_fields{};
  return deserialize_to(t,data,size,unknown_fields);
}

// ::resource::UpBoxConfigList
template<>
std::size_t get_needed_size<::resource::UpBoxConfigList>(const ::resource::UpBoxConfigList& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t total = unknown_fields.total_size();
  if (!t.data.empty()) {

    for(const auto& e: t.data) {
      std::size_t sz = get_needed_size(e);
      total += 1 + calculate_varint_size(sz) + sz;
    }
  }
  return total;
} // std::size_t get_needed_size<::resource::UpBoxConfigList>(const ::resource::UpBoxConfigList& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
void serialize_to<::resource::UpBoxConfigList>(char* data, std::size_t size, const ::resource::UpBoxConfigList& t, const ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  {
    // std::vector<::resource::UpBoxConfig> data; // message, field number = 1
    if (!t.data.empty()) {

      for(const auto& e: t.data) {
        serialize_varint(data, pos, size, 10);
        std::size_t sz = get_needed_size(e);
        serialize_varint(data, pos, size, sz);
        serialize_to(data+pos, sz, e);
        pos += sz;
      }
    }
  }
  unknown_fields.serialize_to(data, pos, size);
} // void serialize_to<::resource::UpBoxConfigList>(char* data, std::size_t size, const ::resource::UpBoxConfigList& t, const ::struct_pb::UnknownFields& unknown_fields)
template<>
bool deserialize_to<::resource::UpBoxConfigList>(::resource::UpBoxConfigList& t, const char* data, std::size_t size, ::struct_pb::UnknownFields& unknown_fields) {
  std::size_t pos = 0;
  bool ok = false;
  while (pos < size) {
    uint64_t tag = 0;
    ok = read_tag(data, pos, size, tag);
    if (!ok) {
      return false;
    }
    switch(tag) {
      // std::vector<::resource::UpBoxConfig> data; // message, field number = 1
      case 10: {
        uint64_t sz = 0;
        ok = deserialize_varint(data, pos, size, sz);
        if (!ok) {
          return false;
        }
        t.data.emplace_back();
        ok = deserialize_to(t.data.back(), data + pos, sz);
        if (!ok) {
          t.data.pop_back();
          return false;
        }
        pos += sz;
        break;
      }
      default: {
        ok = deserialize_unknown(data, pos, size, tag, unknown_fields);
        return ok;
      }
    }
  }
return true;
} // bool deserialize_to<::resource::UpBoxConfigList>(::resource::UpBoxConfigList&, const char*, std::size_t)
// end of ::resource::UpBoxConfigList
template<>
bool deserialize_to<::resource::UpBoxConfigList>(::resource::UpBoxConfigList& t, const char* data, std::size_t size) {
  ::struct_pb::UnknownFields unknown_fields{};
  return deserialize_to(t,data,size,unknown_fields);
}

} // internal
} // struct_pb
