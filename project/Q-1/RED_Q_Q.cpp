#include <iostream>
#include "RED_Q_Q.h"

numberR RED_Q_Q(numberR& number1) {
	numberR result;
	numberZ resZ, tempR;
	NaturalNumber naturalNumberW, tempN, resN;
	int numberWhole1;
	numberWhole1 = POZ_Z_D(number1.whole);
	naturalNumberW = ABS_Z_N(number1.whole);
	tempN = GCF_NN_N(naturalNumberW, number1.natural);
	tempR = TRANS_N_Z(tempN);
	resN = DIV_NN_N(number1.natural, tempN);
	resZ = DIV_ZZ_Z(number1.whole, tempR);
	result.natural = resN;
	result.whole = resZ;
	return result;
}