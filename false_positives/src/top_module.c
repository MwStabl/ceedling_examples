#include <stdbool.h>

#include "top_module.h"

bool decide(uint8_t number) {
  if (number > 5) {
    return true;
  }
  else {
    return false;
  }
}
