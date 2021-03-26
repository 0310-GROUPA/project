#pragma once
#include <vector>

struct NumberNN {
    std::vector<int> arrayNum;
    int olderCoef;
};

typedef struct NumberNN NaturalNumber;

NaturalNumber XtoXArray(unsigned long long number);

unsigned long long XArrayToX(NaturalNumber exempleX);
