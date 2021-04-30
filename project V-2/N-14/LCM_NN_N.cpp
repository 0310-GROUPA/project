#include "LCM_NN_N.h"

NaturalNumber LCM_NN_N(NaturalNumber& num1, NaturalNumber& num2) {
	NaturalNumber res, temp, temp2;
	bool number1S, number2S;
	number1S = NZER_N_B(num1);            //!
	number2S = NZER_N_B(num2);
	if (!number1S) return num1;
	else if (!number2S) return num2;
	else {
		temp = MUL_NN_N(num1, num2);  //!
		temp2 = GCF_NN_N(num1, num2); //!
		res = DIV_NN_N(temp, temp2);  //!
		return res;
	}
}
/*Created by Alexander Kononov*/
