#ifndef __SPU_CORE_HPP__
#define __SPU_CORE_HPP__

#include <stdint.h>

namespace spu {
  uint32_t read(uint32_t address);

  void write(uint32_t address, uint32_t data);
}

#endif
