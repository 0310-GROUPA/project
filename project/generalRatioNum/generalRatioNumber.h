#pragma once
#include "generalNatNum.h"
#include "generalZNum.h"
#include <vector>
struct numberRatio
{
    NaturalNumber natural;
    numberZ whole;
};
typedef struct numberRatio numberR;

numberR XtoRArrayX(int whole, unsigned long long natural);