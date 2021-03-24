#include <iostream>
#include "generalNatNum.h"
#include <vector>



NaturalNumber XtoXArray(int number) {
    std::vector<int> arrayNumXA;
    NaturalNumber exempleXA;
    int olderCoefXA, remain;
    olderCoefXA = 0;
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

int xArrayToX(NaturalNumber exempleX) {
    int number, i;
    number = 0;
    for (i = 0; i < exempleX.olderCoef; ++i) {
        number += exempleX.arrayNum[i] * std::pow(10, i);
    }
    return number;
}