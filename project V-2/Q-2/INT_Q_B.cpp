#include <iostream>
#include "INT_Q_B.h"
/* Checking for zero */
bool INT_Q_B(numberR& number1){
	numberR temp;
	temp = RED_Q_Q(number1);  //!
	if (temp.natural.arrayNum[0] == 1 && temp.natural.olderCoef == 1)
		return true;
	else
		return false;
}
/* Created by Shohruz Tursunov */
