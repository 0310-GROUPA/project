#pragma once
#include "generalNatNum.h"
#include "generalZNum.h"
#include <vector>
struct numberRatio
{
    NaturalNumber natural;
    numberZ whole;
    int wholeOr;
    unsigned long long naturalOr;
};
typedef struct numberRatio numberR;