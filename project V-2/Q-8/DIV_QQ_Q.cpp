#include <iostream>
#include "DIV_QQ_Q.h"
numberR DIV_QQ_Q(numberR R1, numberR R2) {
	numberR res;
	numberZ numerator;
	NaturalNumber denominator;
	numerator = TRANS_N_Z(R2.natural);  //!
	res.whole = MUL_ZZ_Z(R1.whole, numerator); //calculate the numerator   //!
	denominator = TRANS_Z_N(R2.whole);
	res.natural = MUL_NN_N(R1.natural, denominator); //calculate the denominator  //!
	if (R2.whole.sign == 1) {
		res.whole = MUL_ZM_Z(res.whole); //voiding losing sign with natural multiplication  //!
	}

	return res;
}
//created by Gorshenin Aleksandr
