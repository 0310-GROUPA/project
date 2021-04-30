#include <iostream>
#include "MUL_ZZ_Z.h"

/* Multiplication of integers */
numberZ MUL_ZZ_Z(numberZ& number1, numberZ& number2) {
    numberZ result;
    NaturalNumber number1N, number2N, temp;
    int number1S, number2S;
    /* model number1 and model number2 */
    number1N = ABS_Z_N(number1);  //!
    number2N = ABS_Z_N(number2);
    /* Determining the Sign of a Number
    (2 - positive, 0 - equal to zero, 1 - negative)*/
    number1S = POZ_Z_D(number1); //!
    number2S = POZ_Z_D(number2);
    /* '+/-' * '0' = '0'; '0' * '+/-' = 0; '0' * '0' = '0'  */
    if ((number1S == 0) || (number2S == 0)) return XtoXArrayZ(int(0));
    else {
        /* (Natural)number1 * (Natural)number2 = (Natural)temp */
        temp = MUL_NN_N(number1N, number2N);  //!
        result.olderCoef = temp.olderCoef;
        result.arrayNum = temp.arrayNum;
        /* '-' * '-' = '+'; '+' * '+' = '+' */
        result.sign = 0;
        /* '-' * '+' = '-'; '+' * '-' = 'i'; */
        if (number1S != number2S) return MUL_ZM_Z(result);  //!
        else return result;
    }
}
/* Created by Daniil Lukinichev */
