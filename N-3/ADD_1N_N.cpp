#include <iostream>
#include "ADD_1N_N.h"

unsigned long long ADD_1N_N(NaturalNumber a) {
	int i;
	unsigned long long res, razr;
	for (i = 0, razr = 1, res = 0; i < a.olderCoef; i++) {
		res += (a.arrayNum[i]) * razr; 
		razr *= 10;
	} //������� ������� � �����
	res += 1; //���������� ��������
	return res;
}
/*���������� 1 � ������������ �����
�������� ������� ������*/