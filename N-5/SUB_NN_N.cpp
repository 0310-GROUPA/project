//Completed by Konstantin Kerman

#include <iostream>
#include "SUB_NN_N.h"

using namespace std;

NaturalNumber SUB_NN_N(NaturalNumber& num1, NaturalNumber& num2) {
	int i, temp, resCOM;
	int tempnum;
	NaturalNumber result, tempS;
	tempnum = 0;
	result.arrayNum.resize(num1.olderCoef);
	result.olderCoef = 0;
	resCOM = COM_NN_D(num1, num2);
	if (resCOM == 1) {
		return SUB_NN_N(num2, num1);
	}
	else if (resCOM == 0) return XtoXArray(unsigned long long(0));
	else {
		tempS = num2;
		for (i = num2.olderCoef; i < num1.olderCoef - 1; ++i) {
			tempS.arrayNum.push_back(0);
			tempS.olderCoef += 1;
		}

		for (i = 0; i < num1.olderCoef - 1; i++) {
			temp = num1.arrayNum[i] + tempnum - tempS.arrayNum[i];
			if (temp < 0)
			{
				result.arrayNum[i] = temp + 10;
				tempnum = -1;
			}
			else
			{
				result.arrayNum[i] = temp;
				tempnum = 0;
			}
			++result.olderCoef;
		}
		temp = num1.arrayNum[num1.olderCoef - 1] - num2.arrayNum[num1.olderCoef - 1] + tempnum;
		if (temp < 0) {
			temp = -temp;
		}
		result.arrayNum[num1.olderCoef - 1] = temp;
		++result.olderCoef;
		return result;
	}
}
