#include "MUL_PQ_P.h"
#include "RED_Q_Q.h"

polinom MUL_PQ_P(polinom P, numberR R){

    polinom res;
    int i;
    numberR temp;
    res.olderCoef=P.olderCoef;
    for(i=0; i<=P.olderCoef; i++){
        temp = MUL_QQ_Q(P.arrayNum[i],R);
        res.arrayNum.push_back(RED_Q_Q(temp)); //alternately multiply each coefficient by a rational number
    }
    return res;
}
/*Created by Gorshenin Aleksandr*/
