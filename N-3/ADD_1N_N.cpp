#include <iostream>
#include "ADD_1N_N.h"

unsigned long long ADD_1N_N(NaturalNumber &number) {
	int i;
	unsigned long long res, razr;
	for (i = 0, razr = 1, res = 0; i < number.olderCoef; i++) {
		res += number.arrayNum[i] * razr;
		razr *= 10;
	} //converting an array to a number
	res += 1; //adding 1
	return res;
}
/*Adding 1 to the natural number
Created by Sergej Sokolov*/
