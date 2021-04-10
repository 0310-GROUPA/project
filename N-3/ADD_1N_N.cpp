#include <iostream>
#include "ADD_1N_N.h"

NaturalNumber ADD_1N_N(NaturalNumber number) {
	int i,r, temp;
	r = 1;
	for (i = 0; i < number.olderCoef; ++i) {
		temp = number.arrayNum[i];
		number.arrayNum[i] = (temp + r) % 10;
		r = int((temp + r) / 10);
	}
	if (r) {
		number.arrayNum.resize(number.olderCoef + 1);
		++number.olderCoef;
		number.arrayNum[number.olderCoef - 1] = r;
	}
	return number;
}

/*Adding 1 to the natural number
Completed by Sergej Sokolov*/
