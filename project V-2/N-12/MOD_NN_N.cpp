#include <iostream>
#include "MOD_NN_N.h"
#include "MUL_NN_N.h"
#include "NZER_N_B.h"
/* Remainder of dividing a larger natural number by a smaller or equal natural number */
NaturalNumber MOD_NN_N(NaturalNumber& number1, NaturalNumber &number2) {
	NaturalNumber result, temp, temp2;
	int flagCom;
    unsigned long long zero;
    zero = 0;
	/* Checking the equal sign between two numbers.
	'2' - the first is greater than the second.
	'1' - the second is greater than the first.
	'0' - are equal. */
    if(!NZER_N_B(number1)) return XtoXArray(zero);  //!
	flagCom = COM_NN_D(number1, number2);       //!
	/* If two numbers are equal, then the remainder of their division is '0' */
    if (flagCom == 0) return XtoXArray(zero);
	/* If the second is larger than the first,
	then we call the same function with the changed values. */
	else if (flagCom == 1) return MOD_NN_N(number2, number1);
	else {
		/* Calculation of the quotient from dividing the first number by the second. */
		temp2 = DIV_NN_N(number1, number2);  //!
		/* Multiplication of the quotient by the second number. */
		temp = MUL_NN_N(number2,temp2);      //!
		/* Subtracting the first number from the result from the second item. */
		result = SUB_NN_N(number1, temp);    //!
		return result;
	}
}
/* Created by Gorshenin Aleksandr */
