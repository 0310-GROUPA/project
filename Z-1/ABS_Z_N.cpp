#include <iostream>
#include "ABS_Z_N.h"
#include "generalNatNum.h"
using namespace std;
/* Convertation Z to N */
NaturalNumber ABZ_Z_N(numberZ &number)
{
	NaturalNumber temp;
	temp.olderCoef = number.olderCoef;
	temp.arrayNum = number.arrayNum;
	return temp;
}
