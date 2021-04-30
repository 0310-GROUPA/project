#include <iostream>
#include "generalZNum.h"
#include <vector>
#include <cmath>

numberZ XtoXArrayZ(long long int number) {
    numberZ temp;
    int olderCoefXA, remain;

    if (number >= 0) temp.sign = 0;
    else if (number < 0) {
        temp.sign = 1;
        number = number * -1;
    }
    olderCoefXA = 0;
    if (number == 0) {
        temp.arrayNum.push_back(0);
        ++olderCoefXA;
    }
    while (number != 0) {
        remain = number % 10;
        temp.arrayNum.push_back(remain);
        number = number / 10;
        ++olderCoefXA;
    }
    temp.olderCoef = olderCoefXA;
    return temp;
}

long long int XarrayZtoX(numberZ number) {
    int i;
    long long int numberI, powP, b;
    numberI = 0;
    for (i = 0; i < number.olderCoef; ++i) {
        b = number.arrayNum[i];
        powP = pow(10, i);
        numberI += b * powP;
    }
    if (number.sign == 1) {
        numberI = numberI * -1;
    }
    return numberI;
}
