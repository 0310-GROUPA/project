#include <iostream>
#include "COM_NN_D.h"

int COM_NN_D(NaturalNumber &a, NaturalNumber &b) {
	int i;
	unsigned long long res, res2, razr;
	for (i = 0, razr = 1, res = 0; i < a.olderCoef; i++) {
		res += a.arrayNum[i] * razr;
		razr *= 10;
	}  //Swapping the first array into a number
	for (i = 0, razr = 1, res2 = 0; i < b.olderCoef; i++) {
		res2 += b.arrayNum[i] * razr;
		razr *= 10;
	} //Swapping the second array into a number
	if (res > res2) return 2;
	else if (res == res2) return 0;
	else return 1; //Comparison
}
/*Comparison of natural numbers
Completed by Sergej Sokolov*/
