#include <iostream>
#include "ADD_ZZ_Z.h"

/* Adding integers */
numberZ ADD_ZZ_Z(numberZ& number1, numberZ& number2) {
	NaturalNumber number1N, number2N, result;
	numberZ rezult;
	int flagCom, number1S, number2S;
	/* model number1 and model number2 */
	number1N = ABS_Z_N(number1);
	number2N = ABS_Z_N(number2);
    std::cout << std::endl;
	/* Checking the equal sign between two numbers.
	'2' - the first is greater than the second.
	'1' - the second is greater than the first.
	'0' - are equal. */
	flagCom = COM_NN_D(number1N, number2N);
	/* If the second is larger than the first,
	then we call the same function with the changed values. */
	if (flagCom == 1) return ADD_ZZ_Z(number2, number1);
	else {
		/* Determining the Sign of a Number 
		(2 - positive, 0 - equal to zero, 1 - negative)*/
		number1S = POZ_Z_D(number1);
		number2S = POZ_Z_D(number2);
		/* '+' + '+' = '+'; '-' + '-' = '-';
		'0' + '0' = '0'; */
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
		/* '-' + '+' = '-'; '+' + '-' = '+' */

		result = SUB_NN_N(number1N, number2N);
        /*
        for(int i = 0; i< number2N.olderCoef;++i){
            std::cout << number2N.arrayNum[i];
        }
        std::cout << std::endl;
        */
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
/* Created by Kononov Alexander */
