#pragma once
#include <vector>
struct numberWhole
{
    int sign;
    int olderCoef;
    std::vector<int> arrayNum;

};
typedef struct numberWhole numberZ;

numberZ XtoXArrayZ(long long int number1);
long long int XarrayZtoX(numberZ number);
