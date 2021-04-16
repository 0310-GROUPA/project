#include <iostream>
#include "TRANS_Z_Q.h"
#include <vector>

/*Convert integer to fractional*/

numberR TRANS_Z_Q(numberZ& number)
{
	numberR result;
	NaturalNumber temp;
	int numberS;
	numberS = POZ_Z_D(number);
	if (numberS == 0) return XtoRArrayX(int(1), unsigned long long(0));
	else {
		temp = TRANS_Z_N(number);
		result.natural = temp;
		if (numberS == 2) {
			result.whole = XtoXArrayZ(int(1));
		}
		else {
			result.whole = XtoXArrayZ(int(-1));
		}
		return result;
	}
}
/*Created by Dyakonov Erik*/