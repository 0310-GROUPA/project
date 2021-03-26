#include <iostream>
#include <vector>
#include "MUL_Nk_N.h"

using namespace std;

NaturalNumber MUL_Nk_N(NaturalNumber number,int degree) /*умножение натурального числа на 10 в степени degree*/
{
	int i, tempCoef;
	NaturalNumber tempStruct;
	vector<int> temp;
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
