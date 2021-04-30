#include <iostream>
#include "SUB_PP_P.h"

polinom SUB_PP_P(polinom first, polinom second)
{
    int i;
    long long int zeroI = 0;
    unsigned long long oneN = 1;
    polinom temp, result;
    numberR zero;
    zero = XtoRArrayX(zeroI,oneN);
    result.olderCoef = -1;
    if(first.olderCoef > second.olderCoef){
        result.arrayNum.resize(first.olderCoef+1);
        temp = second;
        for(i=second.olderCoef; i<first.olderCoef;++i){
            temp.arrayNum.push_back(zero);
            temp.olderCoef++;
        }
        for(i=0;i<first.olderCoef+1;++i){
            result.arrayNum[i] = SUB_QQ_Q(first.arrayNum[i], temp.arrayNum[i]);  //!
            result.olderCoef++;
        }
    }else if (second.olderCoef > first.olderCoef){
        result.arrayNum.resize(second.olderCoef+1);
        temp = first;
        for(i=first.olderCoef; i<second.olderCoef;++i){
            temp.arrayNum.push_back(zero);
            temp.olderCoef++;
        }
        for(i=0;i<second.olderCoef+1;++i){
            result.arrayNum[i] = SUB_QQ_Q(temp.arrayNum[i], second.arrayNum[i]);
            result.olderCoef++;
        }
    }else{
        result.arrayNum.resize(first.olderCoef+1);
        for(i=0;i<first.olderCoef+1;++i){
            result.arrayNum[i] = SUB_QQ_Q(first.arrayNum[i], second.arrayNum[i]);
            result.olderCoef++;
        }
    }
    correct(result);
    return result;
}
/* Created by Shohruz Tursunov */
