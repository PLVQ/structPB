#pragma once

#include "ylt/struct_json/json_reader.h"

struct AppCFG {
  std::string ResBinPath;
};
REFLECTION(AppCFG, ResBinPath);