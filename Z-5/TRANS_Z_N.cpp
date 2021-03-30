#include <iostream>
#include "TRANS_Z_N.h"

NaturalNumber TRANS_Z_N(numberZ number)
{
	NaturalNumber temp;
	temp.arrayNum = number.arrayNum;
	temp.olderCoef = number.olderCoef;
	return temp;
}