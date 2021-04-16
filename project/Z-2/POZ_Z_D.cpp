#include <iostream>
#include <vector>
#include "POZ_Z_D.h"

/* Determination of the positivity of a number */
int POZ_Z_D(numberZ& number){
    /* (2 - positive, 0 - equal to zero, 1 - negative) */
    if (number.sign == 1) return 1;
    else {
        if ((number.olderCoef == 1) && (number.arrayNum[number.olderCoef - 1] == 0)) return 0;
        else return 2;
    }
}
/* Creasted by Anastasia Frolkova */
