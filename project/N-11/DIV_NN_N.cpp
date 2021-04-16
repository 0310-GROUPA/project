#include <iostream>
#include "DIV_NN_N.h"


/* The quotient of dividing a larger natural 
number by a smaller or equal natural number */
NaturalNumber DIV_NN_N(NaturalNumber &number1, NaturalNumber& number2) {
	NaturalNumber result, temp, temp2;
	int flagCom, c;
	/* Checking the equal sign between two numbers.
	'2' - the first is greater than the second.
	'1' - the second is greater than the first.
	'0' - are equal. */
	flagCom = COM_NN_D(number1, number2);
	/* If the second is larger than the first,
	then we call the same function with the changed values. */
	if (flagCom == 1) return DIV_NN_N(number2, number1);
	/* If two numbers are equal, then their quotient is '1' */
	else if (flagCom == 0) return XtoXArray(unsigned long long (1));
	else {
		result = XtoXArray(unsigned long long(0));
		temp = number1;
		c = int(XArrayToX(number2));
		/* Calculate the first digit of the quotient 
		from dividing the first number by the second, 
		write the digit into the result. Multiply 
		the second number by this number. Subtract 
		the resulting number from the first number 
		and write it down as the first number. Repeat 
		until the first number is less than the second. */
		while (COM_NN_D(temp, number2) != 1) {
			temp2 = DIV_NN_Dk(temp, number2);
			result = ADD_NN_N(result, temp2);
			temp = SUB_NDN_N(temp, temp2 , c);
		}
		return result;
	}
}
/* Created by Frolkova Anastasia and Krasnov Semyon */