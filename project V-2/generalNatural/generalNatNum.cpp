#include <iostream>
#include "generalNatNum.h"
#include <vector>
#include <cmath>


NaturalNumber XtoXArray(unsigned long long number) {
    std::vector<int> arrayNumXA;
    NaturalNumber exempleXA;
    int olderCoefXA, remain;
    olderCoefXA = 0;
    if (number == 0) {
        arrayNumXA.push_back(0);
        ++olderCoefXA;
    }
    while (number != 0) {
        remain = number % 10;
        arrayNumXA.push_back(remain);
        number = number / 10;
        ++olderCoefXA;
    }
    exempleXA.arrayNum = arrayNumXA;
    exempleXA.olderCoef = olderCoefXA;

    return exempleXA;
}

unsigned long long XArrayToX(NaturalNumber exempleX) {
    int i;
    unsigned long long number, b, h;
    number = 0;
    for (i = 0; i < exempleX.olderCoef; ++i) {
        b = exempleX.arrayNum[i];
        h = pow(10, i);
        number += b * h;
    }
    return number;
}
