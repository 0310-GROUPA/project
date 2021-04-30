#include "tests.h"

void AllTest()
{
	NaturalNumber nnum1, nnum2;
	numberZ znum1, znum2, zresu;
	numberR rnum1, rnum2, rresu, rnum;
	polinom pnum1;
	polinom pnum2;
	polinom presu;
	numberR r1, r2, rres;
	int n = 5;
	long long int d, k;
	nnum1 = XtoXArray(1);
	nnum2 = XtoXArray(2);
	assert(COM_NN_D(nnum1,nnum2)==1);//n-1
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(1);
	assert(COM_NN_D(nnum1, nnum2) == 2);//n-1
	nnum1 = XtoXArray(1);
	nnum2 = XtoXArray(1);
	assert(COM_NN_D(nnum1, nnum2) == 0);//n-1
	nnum2 = XtoXArray(0);
	assert(NZER_N_B(nnum2) == false);//n-2
	assert(NZER_N_B(nnum1) == true);//n-2
	nnum2 = XtoXArray(2);
	nnum1 = ADD_1N_N(nnum2);
	nnum2 = XtoXArray(3);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-3
	nnum1 = ADD_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(6);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-4
	nnum1 = SUB_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(0);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-5
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(1);
	nnum1 = SUB_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(1);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-5
	nnum1 = XtoXArray(1);
	nnum2 = XtoXArray(2);
	nnum1 = SUB_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(1);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-5
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(10);
	nnum1 = MUL_ND_N(nnum1, n);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-6
	nnum1 = XtoXArray(0);
	nnum2 = XtoXArray(0);
	nnum1 = MUL_ND_N(nnum1, n);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-6
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(200000);
	nnum1 = MUL_Nk_N(nnum1, n);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-7
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(2);
	n = 0;
	nnum1 = MUL_Nk_N(nnum1, n);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-7
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(2);
	nnum1 = MUL_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(4);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-8
	nnum1 = XtoXArray(0);
	nnum2 = XtoXArray(2);
	nnum1 = MUL_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(0);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-8
	nnum1 = XtoXArray(8);
	nnum2 = XtoXArray(2);
	n = 2;
	nnum1 = SUB_NDN_N(nnum1, nnum2, n);
	nnum2 = XtoXArray(4);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-9
	nnum1 = XtoXArray(0);
	nnum2 = XtoXArray(2);
	n = 0;
	nnum1 = SUB_NDN_N(nnum1, nnum2, n);
	nnum2 = XtoXArray(0);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-9
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(2);
	nnum1 = DIV_NN_Dk(nnum1, nnum2);
	nnum2 = XtoXArray(1);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-10
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(200);
	nnum1 = DIV_NN_Dk(nnum1, nnum2);
	nnum2 = XtoXArray(100);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-10
	nnum1 = XtoXArray(200);
	nnum2 = XtoXArray(2);
	nnum1 = DIV_NN_Dk(nnum1, nnum2);
	nnum2 = XtoXArray(100);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-10
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(2);
	nnum1 = DIV_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(1);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-11
	nnum1 = XtoXArray(22);
	nnum2 = XtoXArray(2);
	nnum1 = DIV_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(11);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-11
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(22);
	nnum1 = DIV_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(11);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-11
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(2);
	nnum1 = MOD_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(0);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-12
	nnum1 = XtoXArray(23);
	nnum2 = XtoXArray(2);
	nnum1 = MOD_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(1);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-12
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(23);
	nnum1 = MOD_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(1);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-12
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(2);
	nnum1 = GCF_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(2);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-13
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(3);
	nnum1 = GCF_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(1);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-13
	nnum1 = XtoXArray(3);
	nnum2 = XtoXArray(2);
	nnum1 = GCF_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(1);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-13
	nnum1 = XtoXArray(15);
	nnum2 = XtoXArray(40);
	nnum1 = GCF_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(5);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-13
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(5);
	nnum1 = LCM_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(10);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-14
	nnum1 = XtoXArray(2);
	nnum2 = XtoXArray(2);
	nnum1 = LCM_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(2);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-14
	nnum1 = XtoXArray(5);
	nnum2 = XtoXArray(2);
	nnum1 = LCM_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(10);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-14
	nnum1 = XtoXArray(10);
	nnum2 = XtoXArray(2);
	nnum1 = LCM_NN_N(nnum1, nnum2);
	nnum2 = XtoXArray(10);
	assert(COM_NN_D(nnum2, nnum1) == 0);//n-14
	znum1 = XtoXArrayZ(-10);
	nnum1 = ABS_Z_N(znum1);
	nnum2 = XtoXArray(10);
	assert(COM_NN_D(nnum2, nnum1) == 0);//z-1
	znum1 = XtoXArrayZ(0);
	nnum1 = ABS_Z_N(znum1);
	nnum2 = XtoXArray(0);
	assert(COM_NN_D(nnum2, nnum1) == 0);//z-1
	znum1 = XtoXArrayZ(0);
	assert(POZ_Z_D(znum1) == 0);//z-2
	znum1 = XtoXArrayZ(29);
	assert(POZ_Z_D(znum1) == 2);//z-2
	znum1 = XtoXArrayZ(-29);
	assert(POZ_Z_D(znum1) == 1);//z-2
	znum1 = XtoXArrayZ(0);
	znum1 = MUL_ZM_Z(znum1);
	assert(POZ_Z_D(znum1) == 0);//z-3
	znum1 = XtoXArrayZ(29);
	znum1 = MUL_ZM_Z(znum1);
	assert(POZ_Z_D(znum1) == 1);//z-3
	znum1 = XtoXArrayZ(-29);
	znum1 = MUL_ZM_Z(znum1);
	assert(POZ_Z_D(znum1) == 2);//z-3
	nnum1 = XtoXArray(289);
	znum1 = TRANS_N_Z(nnum1);
	znum2 = XtoXArrayZ(289);
	assert(testzz(znum1, znum2)==true);//z-4
	znum1 = XtoXArrayZ(289);
	nnum1 = TRANS_Z_N(znum1);
	nnum2 = XtoXArray(289);
	assert(COM_NN_D(nnum2, nnum1) == 0);//z-5
	znum1 = XtoXArrayZ(0);
	nnum1 = TRANS_Z_N(znum1);
	nnum2 = XtoXArray(0);
	assert(COM_NN_D(nnum2, nnum1) == 0);//z-5
	znum1 = XtoXArrayZ(289);
	znum2 = XtoXArrayZ(111);
	znum1 = ADD_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(400);
	assert(testzz(znum1, znum2) == true);//z-6
	znum1 = XtoXArrayZ(-111);
	znum2 = XtoXArrayZ(111);
	znum1 = ADD_ZZ_Z(znum1, znum2);
	znum1.sign = 0;
	znum2 = XtoXArrayZ(0);
	assert(testzz(znum1, znum2) == true);//z-6
	znum1 = XtoXArrayZ(-111);
	znum2 = XtoXArrayZ(112);
	znum1 = ADD_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(1);
	assert(testzz(znum1, znum2) == true);//z-6
	znum1 = XtoXArrayZ(-111);
	znum2 = XtoXArrayZ(-111);
	znum1 = ADD_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(-222);
	assert(testzz(znum1, znum2) == true);//z-6
	znum1 = XtoXArrayZ(111);
	znum2 = XtoXArrayZ(0);
	znum1 = ADD_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(111);
	assert(testzz(znum1, znum2) == true);//z-6
	znum1 = XtoXArrayZ(-111);
	znum2 = XtoXArrayZ(0);
	znum1 = ADD_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(-111);
	assert(testzz(znum1, znum2) == true);//z-6
	znum1 = XtoXArrayZ(-111);
	znum2 = XtoXArrayZ(111);
	znum1 = SUB_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(-222);
	assert(testzz(znum1, znum2) == true);//z-7
	znum1 = XtoXArrayZ(-111);
	znum2 = XtoXArrayZ(-111);
	znum1 = SUB_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(0);
	assert(testzz(znum1, znum2) == true);//z-7
	znum1 = XtoXArrayZ(111);
	znum2 = XtoXArrayZ(111);
	znum1 = SUB_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(0);
	assert(testzz(znum1, znum2) == true);//z-7
	znum1 = XtoXArrayZ(-222);
	znum2 = XtoXArrayZ(111);
	znum1 = SUB_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(-333);
	assert(testzz(znum1, znum2) == true);//z-7
	znum1 = XtoXArrayZ(111);
	znum2 = XtoXArrayZ(-222);
	znum1 = SUB_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(333);
	assert(testzz(znum1, znum2) == true);//z-7
	znum1 = XtoXArrayZ(111);
	znum2 = XtoXArrayZ(-2);
	znum1 = MUL_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(-222);
	assert(testzz(znum1, znum2) == true);//z-8
	znum1 = XtoXArrayZ(-111);
	znum2 = XtoXArrayZ(-2);
	znum1 = MUL_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(222);
	assert(testzz(znum1, znum2) == true);//z-8
	znum1 = XtoXArrayZ(-111);
	znum2 = XtoXArrayZ(2);
	znum1 = MUL_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(-222);
	assert(testzz(znum1, znum2) == true);//z-8
	znum1 = XtoXArrayZ(111);
	znum2 = XtoXArrayZ(0);
	znum1 = MUL_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(0);
	assert(testzz(znum1, znum2) == true);//z-8
	znum1 = XtoXArrayZ(0);
	znum2 = XtoXArrayZ(-2);
	znum1 = MUL_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(0);
	assert(testzz(znum1, znum2) == true);//z-8
	znum1 = XtoXArrayZ(111);
	znum2 = XtoXArrayZ(-2);
	znum1 = DIV_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(-55);
	assert(testzz(znum1, znum2) == true);//z-9
	znum1 = XtoXArrayZ(-111);
	znum2 = XtoXArrayZ(-2);
	znum1 = DIV_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(55);
	assert(testzz(znum1, znum2) == true);//z-9
	znum1 = XtoXArrayZ(111);
	znum2 = XtoXArrayZ(2);
	znum1 = DIV_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(55);
	assert(testzz(znum1, znum2) == true);//z-9
	znum1 = XtoXArrayZ(111);
	znum2 = XtoXArrayZ(-2);
	znum1 = DIV_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(-55);
	assert(testzz(znum1, znum2) == true);//z-9
	znum1 = XtoXArrayZ(111);
	znum2 = XtoXArrayZ(-2);
	znum1 = MOD_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(1);
	assert(testzz(znum1, znum2) == true);//z-10
	znum1 = XtoXArrayZ(-111);
	znum2 = XtoXArrayZ(-2);
	znum1 = MOD_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(1);
	assert(testzz(znum1, znum2) == true);//z-10
	znum1 = XtoXArrayZ(111);
	znum2 = XtoXArrayZ(2);
	znum1 = MOD_ZZ_Z(znum1, znum2);
	znum2 = XtoXArrayZ(1);
	assert(testzz(znum1, znum2) == true);//z-10
	pnum1 = vodtest(-111, 3);
	pnum2 = vodtest(2, 3);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-109, 3);
	assert(testpp(pnum1,pnum2) == true);//p-1
	pnum1 = vodtest(-111, 3);
	pnum2 = vodtest(111, 3);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(0, 3);
	assert(testpp(pnum1, pnum2) == true);//p-1
	pnum1 = vodtest(2, 3);
	pnum2 = vodtest(-111, 3);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-109, 3);
	assert(testpp(pnum1, pnum2) == true);//p-1
	pnum1 = vodtest(111, 3);
	pnum2 = vodtest(-111, 3);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(0, 3);
	assert(testpp(pnum1, pnum2) == true);//p-1
	pnum1 = vodtest(-111, 3);
	pnum2 = vodtest(2, 2);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-36, 1);
	assert(testpp(pnum1, pnum2) == true);//p-1
	pnum1 = vodtest(111, 3);
	pnum2 = vodtest(2, 3);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(113, 3);
	assert(testpp(pnum1, pnum2) == true);//p-1
	pnum1 = vodtest(-111, 3);
	pnum2 = vodtest(2, 3);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-109, 3);
	assert(testpp(pnum1, pnum2) == true);//p-1

	pnum1 = vodtest(-111, 3);
	pnum2 = vodtest(111, 3);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(0, 3);
	assert(testpp(pnum1, pnum2) == true);//p-1

	pnum1 = vodtest(2, 3);
	pnum2 = vodtest(-111, 3);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-109, 3);
	assert(testpp(pnum1, pnum2) == true);//p-1

	pnum1 = vodtest(111, 3);
	pnum2 = vodtest(-111, 3);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(0, 3);
	assert(testpp(pnum1, pnum2) == true);//p-1

	pnum1 = vodtest(-111, 3);
	pnum2 = vodtest(2, 2);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-36, 1);
	assert(testpp(pnum1, pnum2) == true);//p-1

	pnum1 = vodtest(111, 3);
	pnum2 = vodtest(2, 3);
	pnum1 = ADD_PP_P(pnum1, pnum2);
	pnum2 = vodtest(113, 3);
	assert(testpp(pnum1, pnum2) == true);//p-1
	/////////////////////////////////////////////////////////////
		/*
		pnum1 = vodtest(-111, 3);
		pnum2 = vodtest(2, 3);
		pnum1 = SUB_PP_P(pnum1, pnum2);
		pnum2 = vodtest(-113, 3);
		assert(testpp(pnum1, pnum2) == true);//p-2

		pnum1 = vodtest(-69, 3);
		pnum2 = vodtest(111, 2);
		pnum1 = SUB_PP_P(pnum1, pnum2);
		pnum2 = vodtest(-65, 2);
		assert(testpp(pnum1, pnum2) == true);//p-2

		pnum1 = vodtest(2, 3);
		pnum2 = vodtest(111, 2);
		pnum1 = SUB_PP_P(pnum1, pnum2);
		pnum2 = vodtest(-329, 6);
		assert(testpp(pnum1, pnum2) == true);//p-2

		pnum1 = vodtest(228, 11);
		pnum2 = vodtest(5, 17);
		pnum1 = SUB_PP_P(pnum1, pnum2);
		pnum2 = vodtest(1541, 77);
		assert(testpp(pnum1, pnum2) == true);//p-2

		pnum1 = vodtest(17, 32);
		pnum2 = vodtest(-5, 4);
		pnum1 = SUB_PP_P(pnum1, pnum2);
		pnum2 = vodtest(57, 32);
		assert(testpp(pnum1, pnum2) == true);//p-2

		pnum1 = vodtest(11, 96);
		pnum2 = vodtest(2, 3);
		pnum1 = SUB_PP_P(pnum1, pnum2);
		pnum2 = vodtest(-53, 96);
		assert(testpp(pnum1, pnum2) == true);//p-2
		puts("p2 tests passed");*/
		/////////////////////////////////////////////////////////////
	pnum1 = vodtest(-111, 3);
	rnum = Rtest(2, 3);
	pnum1 = MUL_PQ_P(pnum1, rnum);
	pnum2 = vodtest(-74, 3);
	assert(testpp(pnum1, pnum2) == true);//p-3

	pnum1 = vodtest(-111, 3);
	rnum = Rtest(111, 3);
	pnum1 = MUL_PQ_P(pnum1, rnum);
	pnum2 = vodtest(-1369, 1);
	assert(testpp(pnum1, pnum2) == true);//p-3

	pnum1 = vodtest(2, 3);
	rnum = Rtest(-111, 3);
	pnum1 = MUL_PQ_P(pnum1, rnum);
	pnum2 = vodtest(-74, 3);
	assert(testpp(pnum1, pnum2) == true);//p-3

	pnum1 = vodtest(111, 2);
	rnum = Rtest(-111, 3);
	pnum1 = MUL_PQ_P(pnum1, rnum);
	pnum2 = vodtest(-407, 2);
	assert(testpp(pnum1, pnum2) == true);//p-3

	pnum1 = vodtest(-111, 3);
	rnum = Rtest(2, 2);
	pnum1 = MUL_PQ_P(pnum1, rnum);
	pnum2 = vodtest(-37, 1);
	assert(testpp(pnum1, pnum2) == true);//p-3

	pnum1 = vodtest(111, 3);
	rnum = Rtest(2, 3);
	pnum1 = MUL_PQ_P(pnum1, rnum);
	pnum2 = vodtest(74, 3);
	assert(testpp(pnum1, pnum2) == true);//p-3
	//////////////////////////////////////////////////
	/*
		pnum1 = vodtest(-111, 3);
		d = 5;
		pnum1 = MUL_Pxk_P(pnum1, d);
		pnum2 = vodtest(-109, 3);
		assert(testpp(pnum1, pnum2) == true);//p-4

		pnum1 = vodtest(-111, 3);
		d = 4;
		pnum1 = MUL_Pxk_P(pnum1, d);
		pnum2 = vodtest(0, 3);
		assert(testpp(pnum1, pnum2) == true);//p-4

		pnum1 = vodtest(2, 3);
		d = 3;
		pnum1 = MUL_Pxk_P(pnum1, d);
		pnum2 = vodtest(-109, 3);
		assert(testpp(pnum1, pnum2) == true);//p-4

		pnum1 = vodtest(111, 3);
		d = 2;
		pnum1 = MUL_Pxk_P(pnum1, d);
		pnum2 = vodtest(0, 3);
		assert(testpp(pnum1, pnum2) == true);//p-4

		pnum1 = vodtest(-111, 3);
		d = 4;
		pnum1 = MUL_Pxk_P(pnum1, d);
		pnum2 = vodtest(-216, 6);
		assert(testpp(pnum1, pnum2) == true);//p-4

		pnum1 = vodtest(111, 3);
		d = 3;
		pnum1 = MUL_Pxk_P(pnum1, d);
		pnum2 = vodtest(113, 3);
		assert(testpp(pnum1, pnum2) == true);//p-4
		puts("p4 tests passed");*/
		///////////////////////////////////////////////////

	pnum1 = vodtest(-111, 3);
	rnum = LED_P_Q(pnum1);
	pnum1 = rtop(rnum);
	pnum2 = vodtest(-111, 3);
	assert(testpp(pnum1, pnum2) == true);//p-5

	pnum1 = vodtest(11, 63);
	rnum = LED_P_Q(pnum1);
	pnum1 = rtop(rnum);
	pnum2 = vodtest(11, 63);
	assert(testpp(pnum1, pnum2) == true);//p-5

	pnum1 = vodtest(-4, 7);
	rnum = LED_P_Q(pnum1);
	pnum1 = rtop(rnum);
	pnum2 = vodtest(-4, 7);
	assert(testpp(pnum1, pnum2) == true);//p-5

	pnum1 = vodtest(41, 6);
	rnum = LED_P_Q(pnum1);
	pnum1 = rtop(rnum);
	pnum2 = vodtest(41, 6);
	assert(testpp(pnum1, pnum2) == true);//p-5

	pnum1 = vodtest(84, 63);
	rnum = LED_P_Q(pnum1);
	pnum1 = rtop(rnum);
	pnum2 = vodtest(84, 63);
	assert(testpp(pnum1, pnum2) == true);//p-5

	pnum1 = vodtest(58, 2);
	rnum = LED_P_Q(pnum1);
	pnum1 = rtop(rnum);
	pnum2 = vodtest(58, 2);
	assert(testpp(pnum1, pnum2) == true);//p-5

	pnum1 = vodtest(-111, 3);
	d = DEG_P_N(pnum1);
	k = 0;
	assert(d == k);//p-6

	pnum1 = vodtest(-111, 3);
	d = DEG_P_N(pnum1);
	k = 0;
	assert(d == k);//p-6

	pnum1 = vodtest(2, 3);
	d = DEG_P_N(pnum1);
	k = 0;
	assert(d == k);//p-6

	pnum1 = vodtest(111, 3);
	d = DEG_P_N(pnum1);
	k = 0;
	assert(d == k);//p-6

	pnum1 = vodtest(-111, 3);
	d = DEG_P_N(pnum1);
	k = 0;
	assert(d == k);//p-6

	pnum1 = vodtest(111, 3);
	d = DEG_P_N(pnum1);
	k = 0;;
	assert(d == k);//p-6

	pnum1 = vodtest(-111, 3);
	rnum = FAC_P_Q(pnum1);
	pnum2 = rtop(Rtest(-111, 3));
	assert(testpp(pnum1, pnum2) == true);//p-7

	pnum1 = vodtest(11, 63);
	rnum = FAC_P_Q(pnum1);
	pnum2 = rtop(Rtest(11, 63));
	assert(testpp(pnum1, pnum2) == true);//p-7

	pnum1 = vodtest(52, 3);
	rnum = FAC_P_Q(pnum1);
	pnum2 = rtop(Rtest(52, 3));
	assert(testpp(pnum1, pnum2) == true);//p-7

	pnum1 = vodtest(-66, 11);
	rnum = FAC_P_Q(pnum1);
	pnum2 = rtop(Rtest(-66, 11));
	assert(testpp(pnum1, pnum2) == true);//p-7

	pnum1 = vodtest(45, 7);
	rnum = FAC_P_Q(pnum1);
	pnum2 = rtop(Rtest(45, 7));
	assert(testpp(pnum1, pnum2) == true);//p-7

	pnum1 = vodtest(99, 84);
	rnum = FAC_P_Q(pnum1);
	pnum2 = rtop(Rtest(99, 84));
	assert(testpp(pnum1, pnum2) == true);//p-7
	/*
	pnum1 = vodtest(-111, 3);
	pnum2 = vodtest(2, 3);
	pnum1 = MUL_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-74, 3);
	assert(testpp(pnum1, pnum2) == true);//p-8

	pnum1 = vodtest(-111, 3);
	pnum2 = vodtest(111, 3);
	pnum1 = MUL_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-1369, 1);
	assert(testpp(pnum1, pnum2) == true);//p-8

	pnum1 = vodtest(2, 3);
	pnum2 = vodtest(-111, 3);
	pnum1 = MUL_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-74, 3);
	assert(testpp(pnum1, pnum2) == true);//p-8

	pnum1 = vodtest(111, 3);
	pnum2 = vodtest(-111, 3);
	pnum1 = MUL_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-1369, 1);
	assert(testpp(pnum1, pnum2) == true);//p-8

	pnum1 = vodtest(-111, 3);
	pnum2 = vodtest(2, 2);
	pnum1 = MUL_PP_P(pnum1, pnum2);
	pnum2 = vodtest(-37, 1);
	assert(testpp(pnum1, pnum2) == true);//p-8

	pnum1 = vodtest(111, 3);
	pnum2 = vodtest(2, 3);
	pnum1 = MUL_PP_P(pnum1, pnum2);
	pnum2 = vodtest(74, 3);
	assert(testpp(pnum1, pnum2) == true);//p-8
	puts("p8 tests passed");*/
	//q-1
//1
	r1.whole = XtoXArrayZ(2);
	r1.natural = XtoXArray(10);
	r2.whole = XtoXArrayZ(1);
	r2.natural = XtoXArray(5);
	r1 = RED_Q_Q(r1);
	assert(testrr(r1, r2) == true);
	//2
	r1.whole = XtoXArrayZ(-9);
	r1.natural = XtoXArray(18);
	r2.whole = XtoXArrayZ(-1);
	r2.natural = XtoXArray(2);
	r1 = RED_Q_Q(r1);
	assert(testrr(r1, r2) == true);
	//q-2
	//1
	r1.whole = XtoXArrayZ(222222);
	r1.natural = XtoXArray(1);
	assert(INT_Q_B(r1) == true);
	//2
	r1.whole = XtoXArrayZ(222222);
	r1.natural = XtoXArray(2);
	assert(INT_Q_B(r1) == true);
	//q-3
	//1
	znum1 = XtoXArrayZ(50);
	r1 = TRANS_Z_Q(znum1);
	r2.whole = XtoXArrayZ(50);
	r2.natural = XtoXArray(1);
	assert(testrr(r1, r2) == true);
	//2
	znum1 = XtoXArrayZ(-50);
	r1 = TRANS_Z_Q(znum1);
	r2.whole = XtoXArrayZ(-50);
	r2.natural = XtoXArray(1);
	assert(testrr(r1, r2) == true);
	//q-4
	//1
	r1.whole = XtoXArrayZ(111);
	r1.natural = XtoXArray(1);
	znum1 = XtoXArrayZ(111);
	znum2 = TRANS_Q_Z(r1);
	assert(testzz(znum1, znum2) == true);
	//2
	r1.whole = XtoXArrayZ(-111);
	r1.natural = XtoXArray(1);
	znum1 = XtoXArrayZ(-111);
	znum2 = TRANS_Q_Z(r1);
	assert(testzz(znum1, znum2) == true);
	//q-5
	//1
	r1.whole = XtoXArrayZ(1);
	r1.natural = XtoXArray(10);
	r2.whole = XtoXArrayZ(2);
	r2.natural = XtoXArray(5);
	r2 = ADD_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(1);
	r1.natural = XtoXArray(2);
	assert(testrr(r1, r2) == true);
	//2
	r1.whole = XtoXArrayZ(-1);
	r1.natural = XtoXArray(10);
	r2.whole = XtoXArrayZ(2);
	r2.natural = XtoXArray(5);
	r2 = ADD_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(3);
	r1.natural = XtoXArray(10);
	assert(testrr(r1, r2) == true);
	//3 
	r1.whole = XtoXArrayZ(1);
	r1.natural = XtoXArray(1);
	r2.whole = XtoXArrayZ(1);
	r2.natural = XtoXArray(1);
	r2 = ADD_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(2);
	r1.natural = XtoXArray(1);
	assert(testrr(r1, r2) == true);
	//4
	r1.whole = XtoXArrayZ(0);
	r1.natural = XtoXArray(100);
	r2.whole = XtoXArrayZ(2);
	r2.natural = XtoXArray(5);
	r2 = ADD_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(2);
	r1.natural = XtoXArray(5);
	assert(testrr(r1, r2) == true);
	//q-6
	//1
	r1.whole = XtoXArrayZ(2);
	r1.natural = XtoXArray(5);
	r2.whole = XtoXArrayZ(1);
	r2.natural = XtoXArray(10);
	r2 = SUB_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(3);
	r1.natural = XtoXArray(10);
	assert(testrr(r1, r2) == true);
	//2
	r1.whole = XtoXArrayZ(2);
	r1.natural = XtoXArray(5);
	r2.whole = XtoXArrayZ(0);
	r2.natural = XtoXArray(10);
	r2 = SUB_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(4);
	r1.natural = XtoXArray(10);
	assert(testrr(r1, r2) == true);
	//3
	r1.whole = XtoXArrayZ(2);
	r1.natural = XtoXArray(5);
	r2.whole = XtoXArrayZ(-1);
	r2.natural = XtoXArray(10);
	r2 = SUB_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(5);
	r1.natural = XtoXArray(10);
	assert(testrr(r1, r2) == true);
	//q-7
	//1
	r1.whole = XtoXArrayZ(2);
	r1.natural = XtoXArray(3);
	r2.whole = XtoXArrayZ(3);
	r2.natural = XtoXArray(2);
	r2 = MUL_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(6);
	r1.natural = XtoXArray(6);
	assert(testrr(r1, r2) == true);
	//2
	r1.whole = XtoXArrayZ(7);
	r1.natural = XtoXArray(9);
	r2.whole = XtoXArrayZ(-5);
	r2.natural = XtoXArray(3);
	r2 = MUL_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(-35);
	r1.natural = XtoXArray(27);
	assert(testrr(r1, r2) == true);
	//3
	r1.whole = XtoXArrayZ(-2);
	r1.natural = XtoXArray(5);
	r2.whole = XtoXArrayZ(-1);
	r2.natural = XtoXArray(1);
	r2 = MUL_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(2);
	r1.natural = XtoXArray(5);
	assert(testrr(r1, r2) == true);
	//q-8
	//1
	r1.whole = XtoXArrayZ(1);
	r1.natural = XtoXArray(5);
	r2.whole = XtoXArrayZ(2);
	r2.natural = XtoXArray(7);
	r2 = DIV_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(7);
	r1.natural = XtoXArray(10);
	assert(testrr(r1, r2) == true);
	//2
	r1.whole = XtoXArrayZ(-1);
	r1.natural = XtoXArray(5);
	r2.whole = XtoXArrayZ(2);
	r2.natural = XtoXArray(7);
	r2 = DIV_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(-7);
	r1.natural = XtoXArray(10);
	//3
	r1.whole = XtoXArrayZ(1);
	r1.natural = XtoXArray(5);
	r2.whole = XtoXArrayZ(1);
	r2.natural = XtoXArray(1);
	r2 = DIV_QQ_Q(r1, r2);
	r1.whole = XtoXArrayZ(1);
	r1.natural = XtoXArray(5);
	//end
	puts("tests passed");
}

bool testzz(numberZ& znum1, numberZ& znum2)
{
	bool p = true;
	if (znum1.olderCoef == znum2.olderCoef && znum1.sign == znum2.sign)
	{
		for (int i = 0; i < znum1.olderCoef && p; i++)
		{
			if (znum1.arrayNum[i] != znum2.arrayNum[i]) p = false;
		}
	}
	else p = false;
	return p;
}
bool testpp(polinom& pol1, polinom& pol2)
{
	bool f = true;
	for (int i = pol1.olderCoef; i >= 0 && f; i--)
	{
		if (COM_NN_D(pol1.arrayNum[i].natural, pol2.arrayNum[i].natural) != 0 && testzz(pol1.arrayNum[i].whole, pol2.arrayNum[i].whole) != true)f = false;
	}
	return f;
}

polinom vodtest(long long znum1, unsigned long long nnum1)
{
	polinom pol;
	numberR rnum1;
	rnum1.natural = XtoXArray(nnum1);
	rnum1.whole = XtoXArrayZ(znum1);
	pol.arrayNum.push_back(rnum1);
	pol.olderCoef = 0;
	return pol;
}

numberR Rtest(long long znum1, unsigned long long nnum1)
{
	numberR num;
	num.natural = XtoXArray(nnum1);
	num.whole = XtoXArrayZ(znum1);
	return num;
}
polinom rtop(numberR r)
{
	polinom pol;
	pol.arrayNum.push_back(r);
	pol.olderCoef = 0;
	return pol;
}

bool testrr(numberR& r1, numberR& r2)
{
	bool p = true;
	if ((testzz(r1.whole, r2.whole) == true) && (COM_NN_D(r1.natural, r2.natural) == 0)) {
		p = true;
	}
	else p = false;
	return p;
}