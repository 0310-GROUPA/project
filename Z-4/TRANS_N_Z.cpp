
#include <iostream>
#include "TRANS_N_Z.h"

/*ѕреобразование натурального в целое*/
numberZ TRANS_N_Z(NaturalNumber number)
{
	numberZ temp;

	temp.arrayNum = number.arrayNum;
	temp.olderCoef = number.olderCoef;
	temp.sign = 0;

	return temp;
}
