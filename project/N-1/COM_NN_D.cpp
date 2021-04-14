#include <iostream>
#include "COM_NN_D.h"

/* Comparison of natural numbers */
int COM_NN_D(NaturalNumber& number1, NaturalNumber& number2) {
	int i;
	/* Comparison of senior coefficients */
	if (number1.olderCoef > number2.olderCoef) return 2;
	else if (number1.olderCoef < number2.olderCoef) return 1;
	else {
		/* If the coefficients are equal. 
		Iterating over an array of numbers.*/
		for (i = number1.olderCoef - 1; i >= 0; i--) {
			/* If the discharge  of the first number is greater than the discharge  of the second */
			if (number1.arrayNum[i] > number2.arrayNum[i]) return 2;
			/* On the contrary */
			else if (number1.arrayNum[i] < number2.arrayNum[i]) return 1;

		}
		return 0;
	}
	//Comparison
}
/* Completed by Sergej Sokolov*/