#include <iostream>
#include "SUB_ZZ_Z.h"

/* Subtracting whole numbers */
numberZ SUB_ZZ_Z(numberZ& number1, numberZ& number2) {
	int number2S, number1S, flagCOM,i;
	NaturalNumber number1N, number2N;
	numberZ result, number1ZM, number2ZM, number1MUL, number2MUL;
	/* model number1 and model number2 */
	number1N = ABS_Z_N(number1);
	number2N = ABS_Z_N(number2);
	/* Determining the Sign of a Number
	(2 - positive, 0 - equal to zero, 1 - negative)*/
	number2S = POZ_Z_D(number2);
	number1S = POZ_Z_D(number1);
	/* Checking the equal sign between two numbers.
	'2' - the first is greater than the second.
	'1' - the second is greater than the first.
	'0' - are equal. */
	/* Table: */
	flagCOM = COM_NN_D(number1N, number2N);
	if (flagCOM == 1) {
		if (number1S == 1) {
			number2MUL = MUL_ZM_Z(number2);
			return ADD_ZZ_Z(number2MUL, number1);
		}
		else {
			number1MUL = MUL_ZM_Z(number1);
			number2MUL = MUL_ZM_Z(number2);
			return SUB_ZZ_Z(number2MUL, number1MUL);
		}
	}
	else
	{
		if (flagCOM == 2) {
			if (number1S == number2S) {
				if (number1S == 2) {
					number2MUL = MUL_ZM_Z(number2);
					result = ADD_ZZ_Z(number1, number2MUL);
					return result;
				}
				else {
					number1MUL = MUL_ZM_Z(number1);
					result = ADD_ZZ_Z(number1MUL,number2);
					return MUL_ZM_Z(result);
				}
			}
			else {
				if (number1S == 2) {
					number2MUL = MUL_ZM_Z(number2);
					result = ADD_ZZ_Z(number1, number2MUL);
					return result;
				}
				else {
					number1MUL = MUL_ZM_Z(number1);
					result = ADD_ZZ_Z(number1MUL,number2);
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
					number2MUL = MUL_ZM_Z(number2);
					return ADD_ZZ_Z(number1, number2MUL);
				}
				else {
					number1MUL = MUL_ZM_Z(number1);
					number1MUL = ADD_ZZ_Z(number1MUL, number2);
					return MUL_ZM_Z(number1MUL);
				}
			}
		}
	}
	
}
/* Created by Vasilev Ilya */