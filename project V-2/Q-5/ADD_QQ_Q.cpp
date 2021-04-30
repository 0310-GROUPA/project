#include <iostream>
#include "ADD_QQ_Q.h"

numberR ADD_QQ_Q(numberR first, numberR second)
{
    NaturalNumber lcm, temp;
    numberR res;
    numberZ first_lcm, second_lcm;
    numberZ firstWhole, seconWhole;
    if(XarrayZtoX(first.whole) == 0){
        return RED_Q_Q(second);
    }else if (XarrayZtoX(second.whole) == 0){
        return RED_Q_Q(first);
    }else{
        lcm = LCM_NN_N(first.natural, second.natural);
        res.natural = lcm;
        temp = DIV_NN_N(lcm, first.natural);
        first_lcm = TRANS_N_Z(temp);
        temp = DIV_NN_N(lcm, second.natural);
        second_lcm = TRANS_N_Z(temp);
        firstWhole = MUL_ZZ_Z(first_lcm, first.whole);
        seconWhole = MUL_ZZ_Z(second_lcm, second.whole);
        res.whole = ADD_ZZ_Z(firstWhole, seconWhole);
        res = RED_Q_Q(res);
        return res;
    }
}

