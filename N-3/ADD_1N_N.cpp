#include <iostream>
#include "ADD_1N_N.h"

setlocale(LC_ALL,"Rus");

unsigned long long ADD_1N_N(NaturalNumber a) {
	int i;
	unsigned long long res, razr;
	for (i = 0, razr = 1, res = 0; i < a.olderCoef; i++) {
		res += (a.arrayNum[i]) * razr; 
		razr *= 10;
	} //ïåðåâîä ìàññèâà â ÷èñëî
	res += 1; //Äîáàâëåíèå åäèíè÷êè
	return res;
}
/*Äîáàâëåíèå 1 ê íàòóðàëüíîìó ÷èñëó
Âûïîëíèë Ñîêîëîâ Ñåðãåé*/
