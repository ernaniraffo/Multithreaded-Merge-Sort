#pragma once

#include "number_generator.h"

#include <vector>
#include <cstdint>


class ArrayGenerator {
public:
    ArrayGenerator();
    ArrayGenerator(uint32_t lo, uint32_t hi);
    void arrayGen(std::vector<uint32_t>& A);
private:
    NumberGenerator rng;
};
