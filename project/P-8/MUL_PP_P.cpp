#include "MUL_PP_P.h"

polinom MUL_PP_P(polinom P1,polinom P2){
    polinom res;
    int i;

    if(P1.olderCoef>=P2.olderCoef){  //if the degree of the first polynomial is greater(or =)
        for(i=0; i<=P2.olderCoef; i++)
        res=ADD_PP_P(res, MUL_Pxk_P(MUL_PQ_P(P1, P2.arrayNum[i]), P2.olderCoef - i));
    }
    if(P1.olderCoef<P2.olderCoef){  //if the degree of the second polynomial is greater
        for(i=0; i<=P1.olderCoef; i++)
        res=ADD_PP_P(res, MUL_Pxk_P(MUL_PQ_P(P2, P1.arrayNum[i]), P1.olderCoef - i));
    }
    return res;
}
/*Created by Gorshenin Aleksandr*/
