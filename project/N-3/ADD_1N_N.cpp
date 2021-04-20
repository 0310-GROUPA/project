#include <iostream>
#include "ADD_1N_N.h"

/* Adding 1 to the natural number */
NaturalNumber ADD_1N_N(NaturalNumber number) {
	int i,r, temp;
	/* 'r' - overflow and addendum */
	r = 1;
	for (i = 0; i < number.olderCoef; ++i) {
		temp = number.arrayNum[i];
		/* We work in the familiar decimal system */
		number.arrayNum[i] = (temp + r) % 10;
		/* Overflow check. '1' - true, '0' - false */
		r = int((temp + r) / 10);
	}
	/* If overflow is true */
	if (r) {
		/* We expand the vector and increase the senior coefficient. */
		number.arrayNum.resize(number.olderCoef + 1);
		++number.olderCoef;
		/* Assigning the value 'r' to the last element of the vector */
		number.arrayNum[number.olderCoef - 1] = r;
	}
	return number;
}

/* Completed by Prolygin Dmitry */
