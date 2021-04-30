#include <iostream>
#include <vector>
#include "MUL_ZM_Z.h"

/* Integer multiplication by (-1) */
numberZ MUL_ZM_Z(numberZ& number) {
	numberZ mynumber;
	mynumber = number;
	/* If the whole is '0' */
	if ((number.olderCoef == 1) && (number.arrayNum[number.olderCoef - 1] == 0)) return mynumber;
	/* If the whole is negative */
	if (number.sign == 1) {
		mynumber.sign = 0;
	}
	/* If the whole is positive */
	else {
		mynumber.sign = 1;
	}
	return mynumber;
}
/*Created by Alexander Kononov*/