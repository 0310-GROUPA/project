#include <iostream>
#include "generalRatioNumber.h"

numberR XtoRArrayX(int whole, unsigned long long natural) {
	numberR result;
	numberZ resultWh;
	NaturalNumber resultN;

	resultWh = XtoXArrayZ(whole);
	resultN = XtoXArray(natural);
	result.natural = resultN;
	result.whole = resultWh;
	return result;
}




