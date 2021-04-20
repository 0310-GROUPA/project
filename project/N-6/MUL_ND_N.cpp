#include <iostream>
#include "MUL_ND_N.h"
#include <vector>

/* Multiplying a natural number by a digit */
NaturalNumber MUL_ND_N(NaturalNumber& n, int& digit)
{
	NaturalNumber result;
    unsigned long long zero;
	int r;
    zero = 0;
	/* 'r' - overflow */
	r = 0;
	/* Create of the vector 'result' */
	result.arrayNum.resize(n.olderCoef);
	result.olderCoef = n.olderCoef;
	/* If the digit is zero, then the product will also be zero. */
    if (digit == 0) return XtoXArray(zero);
	for (int j = 0; j < n.olderCoef; j++) {
		/* We work in the familiar decimal system */
		result.arrayNum[j] = (n.arrayNum[j] * digit + r) % 10;
		/* Overflow check. 'other' - true, '0' - false */
		r = (n.arrayNum[j] * digit + r) / 10;
	}
	/* If overflow is true */
	if (r){
		/* We expand the vector and increase the senior coefficient. */
		result.arrayNum.resize(result.olderCoef + 1);
		++result.olderCoef;
		/* Assigning the value 'r' to the last element of the vector */
		result.arrayNum[result.olderCoef-1] = r;
	}
	return result;
}
/* Created by Dmitry Prolygin */
