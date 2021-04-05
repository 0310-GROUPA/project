#include <iostream>
#include "ADD_ZZ_Z.h"

numberZ ADD_ZZ_Z(numberZ number1, numberZ number2) {
	NaturalNumber number1N, number2N, result;
	numberZ rezult;
	int flagCom, number1S, number2S;
	number1N = ABS_Z_N(number1);
	number2N = ABS_Z_N(number2);
	flagCom = COM_NN_D(number1N, number2N);
	if (flagCom == 1) return ADD_ZZ_Z(number2, number1);
	else {
		number1S = POZ_Z_D(number1);
		number2S = POZ_Z_D(number2);
		if (number1S == number2S) {
			result = ADD_NN_N(number1N, number2N);
			rezult.arrayNum = result.arrayNum;
			rezult.olderCoef = result.olderCoef;
			if (number1S == 1) {
				rezult.sign = 1;
				return rezult;
			}
			else if(number1S == 2){
				rezult.sign = 0;
				return rezult;
			}
			else {
				return XtoXArrayZ(int(0));
			}
		}
		result = SUB_NN_N(number1N, number2N);
		rezult.arrayNum = result.arrayNum;
		rezult.olderCoef = result.olderCoef;
		if(number1S == 2){
			rezult.sign = 0;
			return rezult;
		}
		else {
			rezult.sign = 1;
			return rezult;
		}
	}
}