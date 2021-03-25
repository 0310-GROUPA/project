#include <iostream>
#include "generalNatNum.h"
#include <vector>



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
    unsigned long long number, b;
    number = 0;
    for (i = 0; i < exempleX.olderCoef; ++i) {
        b = unsigned long long(exempleX.arrayNum[i]);
        number += exempleX.arrayNum[i] * unsigned long long(std::pow(10, i));
    }
    number = unsigned long long(number);
    return number;
}
