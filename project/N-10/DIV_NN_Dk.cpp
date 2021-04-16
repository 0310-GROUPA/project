#include <iostream>
#include <vector>
#include "DIV_NN_Dk.h"

/*Create Kirsanov Ivan*/
/*helped Alexander Kononov*/

/* Calculation of the first digit of dividing a larger natural 
by a smaller one, multiplied by 10 ^ k, where k is the position 
number of this digit. 'k' - is equal to the difference of the 
leading coefficients of two numbers. */
NaturalNumber DIV_NN_Dk(NaturalNumber& numbr1, NaturalNumber& numbr2) {
	NaturalNumber temp, result, temp2;
	int flagCom, i, active, tempO;
	/* Special for 'while' */
	active = 1;
	result = XtoXArray(unsigned long long(0));
	/* Checking the equal sign between two numbers.
	'2' - the first is greater than the second.
	'1' - the second is greater than the first.
	'0' - are equal. */
	flagCom = COM_NN_D(numbr1, numbr2);
	/* If the second is larger than the first,
	then we call the same function with the changed values. */
	if (flagCom == 1) return DIV_NN_Dk(numbr2, numbr1);
	/* If two numbers are equal, then the first and 
	only digit of the quotient is '1' */
	else if (flagCom == 0) return XtoXArray(unsigned long long(1));
	else {
		/* We take the first digits of the first number 
		until they become more than the second number */
		i = 1;
		temp.olderCoef = 1;
		temp.arrayNum.push_back(numbr1.arrayNum[numbr1.olderCoef - i]);
		while (active) {
			flagCom = COM_NN_D(temp, numbr2);
			/*If they are equal, then the first digit of the quotient is '1'*/
			if (flagCom == 0) {
				temp2 = XtoXArray(unsigned long long(1));
				return MUL_Nk_N(temp2,
				(numbr1.olderCoef - temp.olderCoef));
			} else if (flagCom == 2) active = 0;
			else {
				++i;
				++temp.olderCoef;
				temp.arrayNum.insert(temp.arrayNum.begin(), numbr1.arrayNum[numbr1.olderCoef - i]);
			}
		}
		tempO = temp.olderCoef;
		/* Subtract from the digits of the first number 
		the digits of the second number until they first 
		become less than the second */
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
NaturalNumber DIV_NN_Dk(NaturalNumber& numbr1, NaturalNumber& numbr2)
{
	NaturalNumber num1,num2;
	NaturalNumber resu;
	resu.olderCoef = 1;
	resu.arrayNum.push_back(0);
	int i = 1;

	if (COM_NN_D(numbr1, numbr2) == 2)
	{
		num1.arrayNum.push_back(numbr1.arrayNum[numbr1.olderCoef - 1]);
		num1.olderCoef = 1;
		num2.olderCoef = numbr2.olderCoef;
		num2.arrayNum = numbr2.arrayNum;
		while (COM_NN_D(num1, num2) == 1)
		{
			num1.arrayNum.insert(num1.arrayNum.begin(), numbr1.arrayNum[numbr1.olderCoef - num1.arrayNum.size() - 1]);
			num1.olderCoef = num1.arrayNum.size();
			i++;
		}
	}
	else if (COM_NN_D(numbr1, numbr2) == 1)
	{
		num1.arrayNum.push_back(numbr2.arrayNum[numbr2.olderCoef - 1]);
		num1.olderCoef = 1;
		num2.olderCoef = numbr1.olderCoef;
		num2.arrayNum = numbr1.arrayNum;
		while (COM_NN_D(num1, num2) == 1)
		{
			num1.arrayNum.insert(num1.arrayNum.begin(), numbr2.arrayNum[numbr2.olderCoef - num1.arrayNum.size() - 1]);
			num1.olderCoef = num1.arrayNum.size();
			i++;
		}
	}
	else if (COM_NN_D(numbr1, numbr2) == 0)resu.arrayNum[0] = 1;

	if (COM_NN_D(numbr1, numbr2) != 0) while (COM_NN_D(num1, num2) == 2 || COM_NN_D(num1, num2) == 0)
	{
		num1 = SUB_NN_N(num1, num2);
		resu = ADD_1N_N(resu);
	}
	if (COM_NN_D(numbr1, numbr2) == 1)resu = MUL_Nk_N(resu, numbr2.olderCoef - i);
	else if (COM_NN_D(numbr1, numbr2) == 2)resu = MUL_Nk_N(resu, numbr1.olderCoef - i);
	return resu;
}
*/
