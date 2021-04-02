#include <iostream>
#include "COM_NN_D.h"

int COM_NN_D(NaturalNumber& a, NaturalNumber& b) {
	int i;
	if (a.olderCoef > b.olderCoef) return 2;
	else if (a.olderCoef < b.olderCoef) return 1;
	else {
		for (i = a.olderCoef - 1; i >= 0; i--) {
			if (a.arrayNum[i] > b.arrayNum[i]) return 2;
			else if (a.arrayNum[i] < b.arrayNum[i]) return 1;

		}
		return 0;
	}
	//Comparison
}
/*Comparison of natural numbers
Completed by Sergej Sokolov*/
