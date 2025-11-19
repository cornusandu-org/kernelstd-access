# kernelstd
Kernelstd is a version of the standard library intended to be used as a building block for bare-metal programming.
## Example Usage
```cpp
#include "include/malloc.hpp"

int main() {
    kstd::alloc_setup(nullptr);  // Start heap management at memory address 0x0

    kstd::malloc(1); kstd::add_mem(2048); // To make sure it has enough space for the next variable.

    int *numbers = (int*)kstd::malloc(2048); // Example

    kstd::free(numbers, 2048);

    return 0;
}
```
