#include <iostream>
#include <vector>
#include "POZ_Z_D.h"

using namespace std;

int comparison(numberZ &number)
{
    int key = number.sign;

    for (int i = 0; i < number.olderCoef + 1; ++i)
    {
        if (number.arrayNum[i] == 0) key = 0;
    }

    if (key == 0) key = 0;
    else
    {
        if (number.sign == 1) key = 1;
        else key = 2;
    }

return key;
}
/* Creasted by Anastasia Frolkova */
