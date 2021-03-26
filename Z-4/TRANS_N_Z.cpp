
#include <iostream>
#include "TRANS_N_Z.h"

/* Converting from a natural number to an integer */
numberZ TRANS_N_Z(NaturalNumber number)
{
	/* Creating an integer structure */
	numberZ temp;

	temp.arrayNum = number.arrayNum;
	temp.olderCoef = number.olderCoef;
	temp.sign = 0;

	return temp;
}
/* Created by Eric Dyakonov */ 
