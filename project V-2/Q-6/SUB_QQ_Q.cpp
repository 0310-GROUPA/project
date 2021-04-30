#include <iostream>
#include "SUB_QQ_Q.h"

numberR SUB_QQ_Q(numberR first, numberR second) {

	NaturalNumber lcm, temp;
	numberR res;
	numberZ first_lcm, second_lcm;
	numberZ firstWhole, seconWhole;

	lcm = LCM_NN_N(first.natural, second.natural);
	res.natural = lcm;
	temp = DIV_NN_N(lcm, first.natural);
	first_lcm = TRANS_N_Z(temp);
	temp = DIV_NN_N(lcm, second.natural);
	second_lcm = TRANS_N_Z(temp);
	firstWhole = MUL_ZZ_Z(first_lcm, first.whole);
	seconWhole = MUL_ZZ_Z(second_lcm, second.whole);
	res.whole = SUB_ZZ_Z(firstWhole, seconWhole);

	return res;
}
