#include <iostream>
#include "RED_Q_Q.h"

numberR RED_Q_Q(numberR& number1) {
	numberR result;
	numberZ resZ, tempR;
    unsigned long long one =1;
	NaturalNumber naturalNumberW, tempN, resN;
    if(XarrayZtoX(number1.whole) == 0){
        result.whole = number1.whole;
        result.natural = XtoXArray(one);
        return result;
    }else{
        naturalNumberW = ABS_Z_N(number1.whole);
        tempN = GCF_NN_N(naturalNumberW, number1.natural);
        tempR = TRANS_N_Z(tempN);
        resN = DIV_NN_N(number1.natural, tempN);
        resZ = DIV_ZZ_Z(number1.whole, tempR);
        result.natural = resN;
        result.whole = resZ;
        return result;
    }
}
