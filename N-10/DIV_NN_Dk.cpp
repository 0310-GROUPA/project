#include <iostream>
#include <vector>
#include "DIV_NN_Dk.h"

/*Create Kirsanov Ivan*/
/*helped Alexander Kononov*/


NaturalNumber DIV_NN_Dk(NaturalNumber& numbr1, NaturalNumber& numbr2) {
	NaturalNumber temp, result;
	int flagCom, i, active, tempO;
	active = 1;
	result = XtoXArray(unsigned long long(0));
	flagCom = COM_NN_D(numbr1, numbr2);
	if (flagCom == 1) return DIV_NN_Dk(numbr2, numbr1);
	else if (flagCom == 0) return XtoXArray(unsigned long long(1));
	else {
		i = 1;
		temp.olderCoef = 1;
		temp.arrayNum.push_back(numbr1.arrayNum[numbr1.olderCoef-i]);
		while (active) {
			flagCom = COM_NN_D(temp, numbr2);
			if (flagCom == 0) return MUL_Nk_N(XtoXArray(unsigned long long(1)), 
				(numbr1.olderCoef - temp.olderCoef));
			else if (flagCom == 2) active = 0;
			else {
				++i;
				++temp.olderCoef;
				temp.arrayNum.insert(temp.arrayNum.begin(), numbr1.arrayNum[numbr1.olderCoef-i]);
			}
		}
		tempO = temp.olderCoef;
		while (COM_NN_D(temp, numbr2) != 1)
		{
			temp = SUB_NN_N(temp, numbr2);
			result = ADD_1N_N(result);
		}
		return MUL_Nk_N(result,
			(numbr1.olderCoef - tempO));
	}
}


/*
NaturalNumber DIV_NN_Dk(NaturalNumber &numbr1, NaturalNumber& numbr2)
{
	NaturalNumber num1;
	NaturalNumber num2;
	NaturalNumber resu;
	resu.olderCoef = 1;
	resu.arrayNum.push_back(0);
	int i = 1;

	if (COM_NN_D(numbr1, numbr2) == 2)
	{
		num1.arrayNum.push_back(numbr1.arrayNum[0]);
		num1.olderCoef = 1;
		num2.olderCoef = numbr2.olderCoef;
		num2.arrayNum = numbr2.arrayNum;
		while (COM_NN_D(num1, num2) == 1)
		{
			num1.arrayNum.push_back(numbr1.arrayNum[i]);
			i++;
			num1.olderCoef = i;
		}
	}
	else if (COM_NN_D(numbr1, numbr2) == 1)
	{
		num1.arrayNum.push_back(numbr2.arrayNum[0]);
		num2.olderCoef = numbr1.olderCoef;
		num2.arrayNum = numbr1.arrayNum;
		while (COM_NN_D(num1, num2) == 1)
		{
			num1.arrayNum.push_back(numbr2.arrayNum[i]);
			i++;
			num1.olderCoef = i;
		}
	}
	else if (COM_NN_D(numbr1, numbr2) == 0) resu.arrayNum[0] = 1;

	while (COM_NN_D(num1, num2) == 2)
	{
		num1 = SUB_NN_N(num1, num2);
		resu = ADD_1N_N(resu);
	}
	if (COM_NN_D(numbr1, numbr2) == 1)resu = MUL_Nk_N(resu, numbr2.olderCoef - numbr1.olderCoef);
	else if (COM_NN_D(numbr1, numbr2) == 2)resu = MUL_Nk_N(resu, numbr1.olderCoef - numbr2.olderCoef);
	return resu;
}
*/
