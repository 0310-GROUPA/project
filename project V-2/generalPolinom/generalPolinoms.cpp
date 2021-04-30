#include "generalPolinoms.h"
#include <iostream>
#include <vector>

void correct(polinom& number1){
    long long int i, j;
    j = 0;
    for(i=number1.olderCoef;i>=0;--i){
        if((XarrayZtoX(number1.arrayNum[i].whole) == 0) && (i != 0)){
            number1.arrayNum.erase(number1.arrayNum.begin()+i);
            ++j;
        }else{
            i = -1;
        }
    }
    number1.olderCoef -= j;
}
