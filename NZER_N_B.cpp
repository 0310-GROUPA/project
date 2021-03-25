#include <iostream>
#include "NZER_N_B.h"
#include <vector>
/*Проверка на ноль*/
bool NZER_N_B(NaturalNumber n) {
	if (n.arrayNum[0] == 0 && n.olderCoef == 1) { /*Если первый разряд равен нулю, и размер равен 1, тогда возвращаем false*/
		return false;
	}
	return true;
}
