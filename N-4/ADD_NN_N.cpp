#include <iostream>
#include "ADD_NN_N.h"
#include <vector>



NaturalNumber ADD_NN_N(NaturalNumber& numberF, NaturalNumber& numberS) {
	int i;
	int r, flag;
	NaturalNumber result;
	flag = COM_NN_D(numberF, numberS);
	
	if (flag == 1) return ADD_NN_N(numberS, numberF);
	else {

		result.arrayNum.resize(numberF.olderCoef);
		result.olderCoef = numberF.olderCoef;
		r = 0;
		
		for (i = 0; i < numberF.olderCoef; ++i) {
			result.arrayNum[i] = (numberF.arrayNum[i] + numberS.arrayNum[i] + r) % 10;
			r = int((numberF.arrayNum[i] + numberS.arrayNum[i] + r) / 10);
		}
		if (r) {
			result.arrayNum.resize(result.olderCoef + 1);
			++result.olderCoef;
			result.arrayNum[result.olderCoef - 1] = r;
		}
		return result;
	}
	
}
//gorshenin aleksandr
