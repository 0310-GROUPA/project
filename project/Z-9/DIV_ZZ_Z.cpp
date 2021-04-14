#include <iostream>
#include "DIV_ZZ_Z.h"


numberZ DIV_ZZ_Z(numberZ& z1, numberZ& z2) {

	numberZ result;
	NaturalNumber number1N, number2N, res1;
	number1N = ABS_Z_N(z1);
	number2N = ABS_Z_N(z2);
	res1 = DIV_NN_N(number1N, number2N); //division of natural numbers
	result.arrayNum = res1.arrayNum;
	result.olderCoef = res1.olderCoef;
	if (POZ_Z_D(z1) == POZ_Z_D(z2)) {   //definition of sign
		result.sign = 0;
	}
	else {
		result.sign = 1;
	}
	return result;
}
