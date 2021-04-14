#pragma once
#include <vector>
struct numberWhole
{
    int sign;
    int olderCoef;
    std::vector<int> arrayNum;

};
typedef struct numberWhole numberZ;

numberZ XtoXArrayZ(int number);
int XarrayZtoX(numberZ number);