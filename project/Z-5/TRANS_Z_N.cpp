#include <iostream>
#include "TRANS_Z_N.h"

/* Converting a non-negative integer to natural */
NaturalNumber TRANS_Z_N(numberZ& number) {
	/* Any positive whole is natural. */
	NaturalNumber temp;
	temp.arrayNum = number.arrayNum;
	temp.olderCoef = number.olderCoef;
	return temp;
}
/* Created by Shokhruz Tursunov */