#pragma once

#include <cstdint>
#include <cstddef>

namespace kstd {
    void* malloc(size_t size);

    void free(void* addr, size_t size);

    void add_mem(size_t size);
}
