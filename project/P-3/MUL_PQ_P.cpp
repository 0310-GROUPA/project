#include "MUL_PQ_P.h"

polinom MUL_PQ_P(polinom P, numberR R){

    polinom res;
    int i;
    res.olderCoef=P.olderCoef;
    for(i=0; i<=P.olderCoef; i++){
        res.arrayNum.push_back(MUL_QQ_Q(P.arrayNum[i],R)); //alternately multiply each coefficient by a rational number
    }
    return res;
}
/*Created by Gorshenin Aleksandr*/
