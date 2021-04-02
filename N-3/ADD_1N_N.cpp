#include <iostream>
#include "ADD_1N_N.h"

void ADD_1N_N(NaturalNumber &number) {
	int i,r;
	r = 1;
	for (i = 0; i < number.olderCoef; ++i) {
		number.arrayNum[i] = (number.arrayNum[i] + r) % 10;
		r = int((number.arrayNum[i] + r) / 10);
	}
	if (r) {
		number.arrayNum.resize(number.olderCoef + 1);
		++number.olderCoef;
		number.arrayNum[number.olderCoef - 1] = r;
	}
	
}

/*Adding 1 to the natural number
Completed by Sergej Sokolov*/
