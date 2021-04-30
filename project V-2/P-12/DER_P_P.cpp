
#include <iostream>
#include "DER_P_P.h"

polinom DER_P_P(polinom pol)
{
    numberR temp;
    unsigned long long one = 1;
    unsigned long long zero = 0;
    polinom result, tempP;
    int i;
    result.olderCoef = -1;
    if(pol.olderCoef==0){
        result.arrayNum.insert(result.arrayNum.begin(),XtoRArrayX(zero, one));
        ++result.olderCoef;
    }else{
        for(i=pol.olderCoef;i>0;--i){
            temp = MUL_QQ_Q(pol.arrayNum[i], XtoRArrayX(i, one));
            result.arrayNum.insert(result.arrayNum.begin(),temp);
            ++result.olderCoef;
        }
    }
    return result;
}

/*Created by Eric Dyakonov*/
