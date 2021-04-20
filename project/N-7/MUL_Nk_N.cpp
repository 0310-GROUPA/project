#include <iostream>
#include <vector>
#include "MUL_Nk_N.h"

/* Multiplying a natural number by 10 ^ k */
NaturalNumber MUL_Nk_N(NaturalNumber& number, int degree){
	int i, tempCoef;
	NaturalNumber tempStruct;
	std::vector<int> temp;
	/* If 'digit' is zero, then we return a number. 10 ^ 0 = 1; number * 1 = number. */
	if ((number.olderCoef == 1) && (number.arrayNum[number.olderCoef-1] == 0)) return number;
	else {
		temp = number.arrayNum;
		tempCoef = number.olderCoef;
		/* When a natural number is multiplied by 10 ^ k, 
		k zeros are added to the end of the number */
		for (i = 0; i < degree; i++) {
			temp.insert(temp.begin(), 0);
		}
		tempCoef += degree;
		tempStruct.arrayNum = temp;
		tempStruct.olderCoef = tempCoef;
		return tempStruct;
	}
}
/* Created by Daniil Lukinichev */