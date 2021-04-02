#include <iostream>
#include "MUL_NN_N.h"


NaturalNumber MUL_NN_N(NaturalNumber number1, NaturalNumber number2) {
	NaturalNumber result,temp1,temp2;
	int comResult,i,r,j;
	r = 0;
	comResult = COM_NN_D(number1, number2);
	result = XtoXArray(unsigned long long(0));
	if (comResult == 1) {
		return MUL_NN_N(number2, number1);
	}
	else {
		for (i = 0; i < number2.olderCoef; i++) {
			if ((number1.arrayNum[i] == 0) || (number2.arrayNum[i]==0)) {
				++r;
			}
			else {
				temp1 = MUL_ND_N(number1, number2.arrayNum[i]);
				
				temp2 = MUL_Nk_N(temp1,r);
				
				result = ADD_NN_N(temp2, result);
				++r;
			}
		}

		return result;
	}
}