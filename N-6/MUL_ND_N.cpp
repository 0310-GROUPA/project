#include <iostream>
#include "MUL_ND_N.h"
#include <vector>


using namespace std;


NaturalNumber MUL_ND_N(NaturalNumber n, int digit)
{
	NaturalNumber result;
	int r;
	r = 0;
	result.arrayNum.resize(n.olderCoef);
	result.olderCoef = n.olderCoef;

	if (digit == 0)
		return XtoXArray(unsigned long long(0));

	for (int j = 0; j < n.olderCoef; j++)
	{
		result.arrayNum[j] = (n.arrayNum[j] * digit + r) % 10;
		r = (n.arrayNum[j] * digit + r) / 10;
	}
	if (r)
	{
		result.arrayNum.resize(result.olderCoef + 1);
		++result.olderCoef;
		result.arrayNum[result.olderCoef-1] = r;
	}
	return result;
}
