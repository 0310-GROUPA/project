#include "GCF_NN_N.h"
#include <iostream>
/*	GCD of natural numbers
	Completed by Konstantin Kerman */

NaturalNumber GCF_NN_N(NaturalNumber num1, NaturalNumber num2) {
	NaturalNumber result;
	int comFlag; /* Nums comparison result */
	bool number1S, number2S;
	/* Euclidean Algorithm */
	number1S = NZER_N_B(num1);
	number2S = NZER_N_B(num2);
	if (!number1S && !number2S) return num1;
	else if (!number1S) return num2;
	else if (!number2S) return num1;
	else {
		while (NZER_N_B(num1) && NZER_N_B(num2)) {
			comFlag = COM_NN_D(num1, num2);
			if (comFlag == 2) {
				/* If num1 is greater than num2, num1 equals the division remainder */
				num1 = MOD_NN_N(num1, num2);
			}
			else {
				/* If num2 is greater than/equals num2, num2 equals the division remainder */
				num2 = MOD_NN_N(num2, num1);
			}
		}
		/* Returning the GCD */
	}
	return ADD_NN_N(num1, num2);
}