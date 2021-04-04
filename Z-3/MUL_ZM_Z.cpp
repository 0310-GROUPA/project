#include <iostream>
#include <vector>
#include "MUL_ZM_Z.h"

numberZ MUL_ZM_Z(numberZ number) {
	numberZ mynumber;

	mynumber = number;
	if ((number.olderCoef == 1) && (number.arrayNum[number.olderCoef - 1] == 0)) return mynumber;
	if (number.sign == 1) {
		mynumber.sign = 0;
	}
	else
	{
		mynumber.sign = 1;
	}
	return mynumber;
}
/*Created by Alexander Kononov*/
