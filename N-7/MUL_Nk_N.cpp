#include <iostream>
#include <vector>
#include "MUL_Nk_N.h"


NaturalNumber MUL_Nk_N(NaturalNumber number, int degree) /*умножение натурального числа на 10 в степени degree*/
{

	int i, tempCoef;
	NaturalNumber tempStruct;

	std::vector<int> temp;
	if ((number.olderCoef == 1) && (number.arrayNum[number.olderCoef-1] == 0)) {
		return number;
	}
	else {
		temp = number.arrayNum;
		tempCoef = number.olderCoef;
		for (i = 0; i < degree; i++) {
			temp.insert(temp.begin(), 0);
		}
		tempCoef += degree;
		tempStruct.arrayNum = temp;
		tempStruct.olderCoef = tempCoef;
		return tempStruct;
	}
}
