#pragma once

#include <cstdint>
#include <cstddef>

namespace kstd {
    template <size_t N>
    class bitset {
        public:
            uint8_t operator[](size_t index) const noexcept;

            void set(size_t index, bool value);

        bitset();
    };

    class compilebitset {
        public:
            size_t num_bits;
            size_t num_words;
            uint16_t data[];

            explicit compilebitset(size_t bits);

            uint8_t operator[](size_t index) const noexcept;

            void set(size_t index, bool value) noexcept;

            void reset() noexcept;

            size_t size() const noexcept;

            static constexpr size_t bytes_for(size_t bits) noexcept;
    };
}