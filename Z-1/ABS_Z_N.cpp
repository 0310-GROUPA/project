#include <iostream>
#include "ABS_Z_N.h"
#include "generalNatNum.h"
using namespace std;
//сам модуль z1 - Абсолютная величина числа(на вход число не в виде b,a,A[...])
NaturalNumber ABZ_Z_N(numberZ &number)
{
	NaturalNumber temp;
	temp.olderCoef = number.olderCoef;
	temp.arrayNum = number.arrayNum;
	return temp;
}