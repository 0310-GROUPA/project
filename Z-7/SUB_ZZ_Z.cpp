#include <iostream>
#include "SUB_ZZ_Z.h"


numberZ SUB_ZZ_Z(numberZ number1, numberZ number2) {
	int number2S, number1S, flagCOM,i;
	NaturalNumber number1N, number2N;
	numberZ result;
	number1N = ABS_Z_N(number1);
	number2N = ABS_Z_N(number2);
	number2S = POZ_Z_D(number2);
	number1S = POZ_Z_D(number1);
	flagCOM = COM_NN_D(number1N, number2N);
	if (flagCOM == 1) {
		if (number1S == 1) {
			return ADD_ZZ_Z(MUL_ZM_Z(number2), number1);
		}
		else {
			return SUB_ZZ_Z(MUL_ZM_Z(number2), MUL_ZM_Z(number1));
		}
	}
	else
	{
		if (flagCOM == 2) {
			if (number1S == number2S) {
				if (number1S == 2) {
					result = ADD_ZZ_Z(number1, MUL_ZM_Z(number2));
					return result;
				}
				else {
					result = ADD_ZZ_Z(MUL_ZM_Z(number1),number2);
					return MUL_ZM_Z(result);
				}
			}
			else {
				if (number1S == 2) {
					result = ADD_ZZ_Z(number1, MUL_ZM_Z(number2));
					return result;
				}
				else {
					result = ADD_ZZ_Z(MUL_ZM_Z(number1),number2);
					return MUL_ZM_Z(result);
				}
			}
		}
		else {
			if (number1S == number2S) {
				return XtoXArrayZ(int(0));
			}
			else {
				if (number1S == 2) {
					return ADD_ZZ_Z(number1, MUL_ZM_Z(number2));
				}
				else {
					return MUL_ZM_Z(ADD_ZZ_Z(MUL_ZM_Z(number1), number2));
				}
			}
		}
	}
	
}