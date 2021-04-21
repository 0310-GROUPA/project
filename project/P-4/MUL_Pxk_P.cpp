#include "MUL_Pxk_P.h"

polinom MUL_Pxk_P(polinom pol1, long long int degree)
{
    int i;
    unsigned long long oneN = 1;
    long long int zeroI = 0;
    numberR zero;
    zero.natural = XtoXArray(oneN);
    zero.whole = XtoXArrayZ(zeroI);
    pol1.olderCoef += degree;
    for(i=0;i<degree;++i){
        pol1.arrayNum.push_back(zero);
    }
    return pol1;
}

/*Created by Kononov Alexandr*/
