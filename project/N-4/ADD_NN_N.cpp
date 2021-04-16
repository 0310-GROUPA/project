#include <iostream>
#include "ADD_NN_N.h"
#include <vector>


/* Adding two natural numbers */
NaturalNumber ADD_NN_N(NaturalNumber& numberF, NaturalNumber& numberS) {
	int i;
	int r, flag;
	NaturalNumber result, temp;
	/* Checking the equal sign between two numbers. 
	'2' - the first is greater than the second. 
	'1' - the second is greater than the first. 
	'0' - are equal. */
	flag = COM_NN_D(numberF, numberS);
	/* If the second is larger than the first, 
	then we call the same function with the changed values. */
	if (flag == 1) return ADD_NN_N(numberS, numberF);
	else {
		temp = numberS;
		/* While the values ​​of the leading coefficient 
		of the two numbers are not equal to each other, 
		we supplement the vector of the second number with zero. */
		while (temp.olderCoef != numberF.olderCoef) {
			temp.arrayNum.push_back(0);
			++temp.olderCoef;
		}
		/* We create the structure of the sum. */
		result.arrayNum.resize(numberF.olderCoef);
		result.olderCoef = numberF.olderCoef;
		/* 'r' - overflow */
		r = 0;
		for (i = 0; i < numberF.olderCoef; ++i) {
			/* We work in the familiar decimal system */
			result.arrayNum[i] = (numberF.arrayNum[i] + temp.arrayNum[i] + r) % 10;
			/* Overflow check. 'other' - true, '0' - false */
			r = int((numberF.arrayNum[i] + temp.arrayNum[i] + r) / 10);
		}
		/* If overflow is true */
		if (r) {
			/* We expand the vector and increase the senior coefficient. */
			result.arrayNum.resize(result.olderCoef + 1);
			++result.olderCoef;
			/* Assigning the value 'r' to the last element of the vector */
			result.arrayNum[result.olderCoef - 1] = r;
		}
		return result;
	}

}
/* Created by Gorshenin Aleksandr */
