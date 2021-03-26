#include <iostream>
#include "NZER_N_B.h"
#include <vector>
/* Checking for zero */
bool NZER_N_B(NaturalNumber &number) {
	if (number.arrayNum[0] == 0 && number.olderCoef == 1) {
	/* If the first bit is zero and the size is 1, then return false */
		return false;
	}
	return true;
}
/* Created by Eric Dyakonov */ 
