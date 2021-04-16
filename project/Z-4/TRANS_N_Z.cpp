#include <iostream>
#include "TRANS_N_Z.h"

/* Natural to Whole Conversion */
numberZ TRANS_N_Z(NaturalNumber& number) {
	numberZ temp;
	temp.arrayNum = number.arrayNum;
	temp.olderCoef = number.olderCoef;
	/* Any natural number is positive. */
	temp.sign = 0;
	return temp;
}
/* Created by Eric Dyakonov */
