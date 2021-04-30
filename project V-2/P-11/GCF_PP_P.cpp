#include <iostream>
#include "GCF_PP_P.h"

polinom GCF_PP_P(polinom P1, polinom P2)
{
    polinom result, temp, tempS, tempT, elsetemp , polinom1, polinom2;
    polinom1 = P1;
    polinom2 = P2;
    temp = MOD_PP_P(polinom1,polinom2);
    if(!((temp.olderCoef==0)&&(XarrayZtoX(temp.arrayNum[0].whole) == 0))){
        tempS =MOD_PP_P(polinom2,temp);
        if(!((tempS.olderCoef==0)&&(XarrayZtoX(tempS.arrayNum[0].whole) == 0))){
            while(!((tempT.olderCoef==0)&&(XarrayZtoX(tempT.arrayNum[0].whole)) == 0)){
                tempT  =  MOD_PP_P(temp, tempS);
                temp = tempS;
                tempS = tempT;
            }
            result = temp;
        }else{
            result = temp;
        }
    }else{
        result = polinom2;
    }
    return result;





    return result;
}
