#include <stdbool.h>

#include "top_module.h"
#include "lower_module.h"

bool decide() {
  if (get_number() > 5) {
    return true;
  }
  else {
    return false;
  }
}
