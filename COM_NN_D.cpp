
#include <iostream>
#include "COM_NN_D.h"
#include <vector>

using namespace std;

int COM_NN_D(NaturalNumber a, NaturalNumber b) { //a,b - массивы введенных чисел. last1,last2 - первые числа старших разрядов 
	int res, res2, i, razr;

	for (i = 0, razr = 1, res = 0; i < a.olderCoef; i++) {
		res = res + a.arrayNum[i] * razr;
		razr *= 10;
	}
	cout << res; //Перекладывание первого массива в число

	for (i = 0, razr = 1, res2 = 0; i < b.olderCoef; i++) {
		res2 = res2 + b.arrayNum[i] * razr;
		razr *= 10;
	} //Перекладывание  второго массива в число


	cout << " " << res2;

	if (res > res2) return 2;
	else if (res == res2) return 0;
	else return 1;
}
/*Сравнение натуральных чисел.
Выполнил Соколов Сергей.*/

