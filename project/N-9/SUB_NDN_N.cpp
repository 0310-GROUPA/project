#include <iostream>
#include "SUB_NDN_N.h"

/* Subtracting from natural another natural multiplied by 
a number for the case with a non-negative result */
NaturalNumber SUB_NDN_N(NaturalNumber &number1, NaturalNumber &number2, int digit) {
	NaturalNumber temp, result;
	/* Multiplication of the second natural number by the second */
	temp = MUL_ND_N(number2, digit);
    if(COM_NN_D(number1, temp) == 1){
        result.olderCoef = -1;
        return result;
    }else{
        /* Difference of the first number and the second multiplied by a digit */
        result = SUB_NN_N(number1, temp);
        return result;
    }
}
/* Created by Yulia Komarova */
