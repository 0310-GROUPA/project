#include <iostream>
#include "MUL_NN_N.h"

/* Multiplication of two natural numbers */
NaturalNumber MUL_NN_N(NaturalNumber& number1, NaturalNumber& number2) {
	NaturalNumber result,temp1,temp2;
	int comResult,i,r;
    unsigned long long zero;
    zero =0;
	/* 'r' is number of repetitions */
	r = 0;
	/* Checking the equal sign between two numbers.
	'2' - the first is greater than the second.
	'1' - the second is greater than the first.
	'0' - are equal. */
	comResult = COM_NN_D(number1, number2);
    result = XtoXArray(zero);
	/* If the second is larger than the first,
	then we call the same function with the changed values. */
	if (comResult == 1) return MUL_NN_N(number2, number1);
	else {
		/* Column multiplication algorithm */
		for (i = 0; i < number2.olderCoef; i++) {
			if (number2.arrayNum[i] == 0) {
				++r;
			}
			else {
				/* Multiply the top number by the number of the 
				bottom one under the index 'i' */
				temp1 = MUL_ND_N(number1, number2.arrayNum[i]);
				/* Multiply by 10 ^ r, where r is the number of repetitions */
				temp2 = MUL_Nk_N(temp1,r);
				/* Add to previous result */
				result = ADD_NN_N(temp2, result);
				++r;
			}
		}
		return result;
	}
}
/* Created by Daniil Lukinichev */
