#include <iostream>
#include <vector>
#include "MUL_ZM_Z.h"

numberZ MultiByMi1(numberZ &number) {
	numberZ mynumber;
	mynumber.arrayNum = number.arrayNum;
	mynumber.olderCoef = number.olderCoef;
	mynumber.sign = number.sign;
	if (mynumber.sign == 1) mynumber.sign = 2;
	else if (mynumber.sign == 2) mynumber.sign = 1;
	return mynumber;
}
/*Created by Alexander Kononov*/