#include "MUL_PP_P.h"

polinom MUL_PP_P(polinom P1,polinom P2){
    polinom result, temp;
    int i;
    long long int zero = 0;
    unsigned long long one =1;
    result.olderCoef = 0;
    result.arrayNum.push_back(XtoRArrayX(zero, one));
    for(i=P1.olderCoef;i>=0;--i){
        temp = MUL_Pxk_P(P2, i);
        temp = MUL_PQ_P(temp,P1.arrayNum[i]);
        result = ADD_PP_P(result, temp);
    }
    correct(result);
    return result;
}
/*Created by Gorshenin Aleksandr*/
