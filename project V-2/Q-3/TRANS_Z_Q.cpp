#include <iostream>
#include "TRANS_Z_Q.h"
#include <vector>

/*Convert integer to fractional*/

numberR TRANS_Z_Q(numberZ& number)
{
	numberR result;
	NaturalNumber temp;
    unsigned long long one;
	int numberS;
    one = 1;
	numberS = POZ_Z_D(number);
    if (numberS == 0) return XtoRArrayX(int(0), one);
	else {
		result.whole = number;
		result.natural = XtoXArray(one);
		return result;
	}
}
/*Created by Dyakonov Erik*/
