#include <iostream>
#include "ADD_1N_N.h"

NaturalNumber ADD_1N_N(NaturalNumber &number) {
	int i,r;
	NaturalNumber result;
	result.arrayNum.resize(number.olderCoef);
	result.olderCoef = number.olderCoef;
	r = 1;
	for (i = 0; i < number.olderCoef; ++i) {
		result.arrayNum[i] = (number.arrayNum[i] + r) % 10;
		r = int((number.arrayNum[i] + r) / 10);
	}
	if (r) {
		result.arrayNum.resize(result.olderCoef + 1);
		++result.olderCoef;
		result.arrayNum[result.olderCoef - 1] = r;
	}
	return result;
	
}

/*Adding 1 to the natural number
Completed by Sergej Sokolov*/
