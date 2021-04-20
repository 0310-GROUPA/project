#include <iostream>
#include "ABS_Z_N.h"

/* The absolute value of the number, the result is natural */
NaturalNumber ABS_Z_N(numberZ& number){
	NaturalNumber temp;
	temp.olderCoef = number.olderCoef;
	temp.arrayNum = number.arrayNum;
	return temp;
}
/* Created by Krasnov Semyon */
