#include <iostream>
#include "SUB_NDN_N.h"

NaturalNumber SUB_NDN_N(NaturalNumber number1, NaturalNumber number2, int digit) {
	int resCom;
	NaturalNumber temp, result;
	temp = MUL_ND_N(number2, digit);
	resCom = COM_NN_D(number1, temp);
	if (resCom == 1) {
		result.olderCoef = 0;
		return result;
	}
	else {
		result = SUB_NN_N(number1, temp);
		return result;
	}
}