#include "ADD_PP_P.h"
#include <vector>
#include <iostream>

polinom ADD_PP_P(polinom pol1, polinom pol2)
{
    polinom resu;
    int ma,mi, j;
    bool flag;
    if (pol1.olderCoef <= pol2.olderCoef)
	{
        flag = 0;
		ma = pol2.olderCoef + 1;
		mi = pol1.olderCoef + 1;
	}
	else
	{
        flag = 1;
		ma = pol1.olderCoef + 1;
		mi = pol2.olderCoef + 1;
	}
    for (j = 0; j < mi; j++)
	{
        resu.arrayNum.push_back(ADD_QQ_Q(pol1.arrayNum[j], pol2.arrayNum[j]));
	}
    if(flag){
        for (j = mi; j < ma; j++)
        {
            resu.arrayNum.push_back(pol1.arrayNum[j]);
        }
    }else{
        for (j = mi; j < ma; j++)
        {
            resu.arrayNum.push_back(pol2.arrayNum[j]);
        }
    }
    resu.olderCoef = ma-1;
    correct(resu);
    return resu;
}
/*Create Pavel Kuznetsov
* helped Kononov Alexandr
*/
