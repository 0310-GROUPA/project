#include <iostream>
#include "MOD_ZZ_Z.h"

/*Remainder of division of a whole by a whole*/
numberZ MOD_ZZ_Z(numberZ& z1, numberZ& z2) {
	numberZ result, div_res, mul_res, sub_res, sub_com;
	/*Comparison of numbers
	  If z1 is greater than z2, then the result will have +
	  If z2 is greater than z1, then the result will have -*/
	sub_com = SUB_ZZ_Z(z1, z2);
	if (POZ_Z_D(sub_com) != 1)
	{
		div_res = DIV_ZZ_Z(z1, z2);
		mul_res = MUL_ZZ_Z(div_res, z2);
		sub_res = SUB_ZZ_Z(z1, mul_res);
		result.arrayNum = sub_res.arrayNum;
		result.olderCoef = sub_res.olderCoef;
		result.sign = 0;
	}
	else
	{
		result.arrayNum = z1.arrayNum;
		result.olderCoef = z1.olderCoef;
		result.sign = 0;
	}

	/*Determine the sign of the result*/
	if ((sub_res.sign != 0) || (sub_com.sign != 0)) return MUL_ZM_Z(result);
	else return result;

	/* Created by Daniil Lukinichev */
}
