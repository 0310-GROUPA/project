#include <iostream>
#include "COM_NN_D.h"

int COM_NN_D(NaturalNumber a, NaturalNumber b) { //a,b - массивы введенных чисел
	int res, res2, i, razr;
	for (i = 0,razr = 1, res = 0; i < a.olderCoef; i++) {
		res += a.arrayNum[i] * razr;
		razr *= 10;
	}  //Перекладывание первого массива в число
	for (i = 0, razr = 1, res2 = 0; i < b.olderCoef; i++) {
		res2 += b.arrayNum[i] * razr;
		razr *= 10;
	} //Перекладывание  второго массива в число
	if (res > res2) return 2;
	else if (res == res2) return 0;
	else return 1; //Сравнение
}
/*Сравнение натуральных чисел.
Выполнил Соколов Сергей.*/


