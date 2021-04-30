#pragma once
#include <vector>
#include <cassert>
#include <iostream>
#include "generalNatNum.h"//n
#include "generalZNum.h"//z
#include "generalRatioNumber.h"//q
#include "generalPolinoms.h"//p
#include "COM_NN_D.h"//n-1
#include "NZER_N_B.h"//n-2
#include "ADD_1N_N.h"//n-3
#include "ADD_NN_N.h"//n-4
#include "SUB_NN_N.h"//n-5
#include "MUL_ND_N.h"//n-6
#include "MUL_Nk_N.h"//n-7
#include "MUL_NN_N.h"//n-8
#include "SUB_NDN_N.h"//n-9
#include "DIV_NN_Dk.h"//n-10
#include "DIV_NN_N.h"//n-11
#include "MOD_NN_N.h"//n-12
#include "GCF_NN_N.h"//n-13
#include "LCM_NN_N.h"//n-14
#include "ABS_Z_N.h"//z-1
#include "POZ_Z_D.h"//z-2
#include "MUL_ZM_Z.h"//z-3
#include "TRANS_N_Z.h"//z-4
#include "TRANS_Z_N.h"//z-5
#include "ADD_ZZ_Z.h"//z-6
#include "SUB_ZZ_Z.h"//z-7
#include "MUL_ZZ_Z.h"//z-8
#include "DIV_ZZ_Z.h"//z-9
#include "MOD_ZZ_Z.h"//z-10
#include "RED_Q_Q.h"//q-1
#include "INT_Q_B.h"//q-2
#include "TRANS_Z_Q.h"//q-3
#include "TRANS_Q_Z.h"//q-4
#include "ADD_QQ_Q.h"//q-5
#include "SUB_QQ_Q.h"//q-6
#include "MUL_QQ_Q.h"//q-7
#include "DIV_QQ_Q.h"//q-8
#include "ADD_PP_P.h"//p-1
#include "SUB_PP_P.h"//p-2
#include "MUL_PQ_P.h"//p-3
#include "MUL_Pxk_P.h"//p-4
#include "LED_P_Q.h"//p-5
#include "DEG_P_N.h"//p-6
#include "FAC_P_Q.h"//p-7
#include "MUL_PP_P.h"//p-8
#include "DIV_PP_P.h"//p-9
#include "MOD_PP_P.h"//p-10
#include "GCF_PP_P.h"//p-11
#include "DER_P_P.h"//p-12
#include "NMR_P_P.h"//p-13

void AllTest();
bool testzz(numberZ &znum1, numberZ &znum2);
bool testpp(polinom &pol1, polinom &pol2);
polinom vodtest(long long znum1, unsigned long long nnum1);
numberR Rtest(long long znum1, unsigned long long nnum1);
polinom rtop(numberR r);
bool testrr(numberR& r1, numberR& r2);