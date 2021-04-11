#include <iostream>
#include "generalZNum.h"
#include <vector>

numberZ XtoXArrayZ(int number) {
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

int XarrayZtoX(numberZ number) {
    int i;
    int numberI, b;
    numberI = 0;
    for (i = 0; i < number.olderCoef; ++i) {
        b = number.arrayNum[i];
        numberI += number.arrayNum[i] * int(std::pow(10, i));
    }
    if (number.sign == 1) {
        numberI = numberI * -1;
    }
    return numberI;
}