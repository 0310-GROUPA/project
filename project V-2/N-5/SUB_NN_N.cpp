#include <iostream>
#include "SUB_NN_N.h"

/* Subtraction from the first greater natural number of the second less or equal */
NaturalNumber SUB_NN_N(NaturalNumber &num1, NaturalNumber &num2) {
	int i, temp, resCOM, tempnum;
	std::vector<int> tempS;
	NaturalNumber result;
    unsigned long long zero;
    zero = 0;
	/* 'tempnum' - overflow */
	tempnum = 0;
	/* We create the structure 'result'. */
	result.arrayNum.resize(num1.olderCoef);
	/* Checking the equal sign between two numbers.
	'2' - the first is greater than the second.
	'1' - the second is greater than the first.
	'0' - are equal. */
	resCOM = COM_NN_D(num1, num2);  //!
	/* If the second is larger than the first,
	then we call the same function with the changed values. */
	if (resCOM == 1) return SUB_NN_N(num2, num1);
	/* If two numbers are equal, then the result of subtracting them will be 0 */
    else if (resCOM == 0) return XtoXArray(zero);
	else {
		/* 'tempS' - copy of the vector of the second number */
		tempS = num2.arrayNum;
		/* While the values ​​of the leading coefficient
		of the two numbers are not equal to each other,
		we supplement the vector of the second number with zero. */
		for (i = num2.olderCoef; i < num1.olderCoef; ++i) {
			tempS.push_back(0);
		}
		/* We go by the coefficients of two numbers */
		for (i = 0; i < num1.olderCoef - 1; i++) {
			/* The difference between the two coefficients, 
			taking into account the occupied category */
			temp = num1.arrayNum[i] + tempnum - tempS[i];
			/* If the difference is less than zero, 
			then we borrow from the highest coefficient. 
			And we write to the vector.*/
			if (temp < 0){
				result.arrayNum[i] = temp + 10;
				tempnum = -1;
			}
			/* Otherwise, we write to the vector. */
			else {
				result.arrayNum[i] = temp;
				tempnum = 0;
			}
		}
		temp = num1.arrayNum[num1.olderCoef - 1] - tempS[num1.olderCoef - 1] + tempnum;
		if (temp < 0) {
			temp = -temp;
		}
		/* We write the result */
		result.arrayNum[num1.olderCoef - 1] = temp;
		result.olderCoef = result.arrayNum.size();
		/* Clearing the vector from insignificant zeros */
		for (i = result.olderCoef - 1; i > 0; --i) {
			if (result.arrayNum[i] == 0) {
				result.arrayNum.erase(result.arrayNum.begin() + i);
				--result.olderCoef;
			}
			else i = 0;
		}
		return result;
	}
}
/* Completed by Konstantin Kerman */
