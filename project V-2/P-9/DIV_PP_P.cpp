#include <iostream>
#include "DIV_PP_P.h"
#include "MUL_PQ_P.h"

int COM_PP_I(polinom number1, polinom number2){
    int i, flagCom;
    NaturalNumber numberN1, numberN2,numberNN1, numberNN2, numberNNN1, numberNNN2;
    if(number1.olderCoef > number2.olderCoef) return 2;
    else if(number2.olderCoef > number1.olderCoef) return 1;
    else{
        for(i=number1.olderCoef;i>=0;--i){
            if((number1.arrayNum[i].whole.sign==1) && (number2.arrayNum[i].whole.sign==0)) return 1;
            else if((number2.arrayNum[i].whole.sign==1) && (number1.arrayNum[i].whole.sign==0)) return 2;
            else{
                numberN1 = TRANS_Z_N(number1.arrayNum[i].whole);
                numberN2 = TRANS_Z_N(number2.arrayNum[i].whole);
                numberNN1 = DIV_NN_N(numberN1, number1.arrayNum[i].natural);
                numberNN2 = DIV_NN_N(numberN2, number2.arrayNum[i].natural);
                flagCom = COM_NN_D(numberNN1, numberNN2);
                if(flagCom == 2){
                    if(number1.arrayNum[i].whole.sign == 1) return 1;
                    else return 2;
                }else if(flagCom == 1){
                    if(number1.arrayNum[i].whole.sign == 1) return 2;
                    else return 1;
                }else{
                    return 2;
                }
            }
        }
        return 0;
    }
}



polinom DIV_PP_P(polinom number1, polinom number2){
    int i;
    unsigned long long one = 1;
    int zero = 0;
    int flagCom;
    numberR tempR1 ,tempR2;
    polinom result ,  tempP1, tempP2, tempResult;
    if(number2.olderCoef > number1.olderCoef) ;
    else{
        tempP2 = number1;
        i = 0;
        result.arrayNum.push_back(XtoRArrayX(zero, one));
        result.olderCoef = 0;
        flagCom = COM_PP_I(tempP2,number2);
        while(flagCom != 1){
            tempR1 = DIV_QQ_Q(tempP2.arrayNum[tempP2.olderCoef], number2.arrayNum[number2.olderCoef]);
            tempP1 = MUL_Pxk_P(number2, (tempP2.olderCoef - number2.olderCoef));
            tempP1 = MUL_PQ_P(tempP1, tempR1);
            tempResult.arrayNum.insert(tempResult.arrayNum.begin() , tempR1);
            tempResult.olderCoef = 0;
            tempResult = MUL_Pxk_P(tempResult, (tempP2.olderCoef - number2.olderCoef));
            result = ADD_PP_P(result, tempResult);
            tempP2 = SUB_PP_P(tempP2, tempP1);
            correct(tempP2);
            ++i;
            flagCom = COM_PP_I(tempP2,number2);
        }
    }
    return result;
}


/*
                    numberNNN1 = MOD_NN_N(numberN1, number1.arrayNum[i].natural);
                    numberNNN2 = MOD_NN_N(numberN2, number2.arrayNum[i].natural);
                    if(numberNNN1.olderCoef > numberNNN2.olderCoef){
                        for(j=numberNNN2.olderCoef;i>=0;--j){
                            if(numberNNN1.arrayNum[j] > numberNNN2.arrayNum[j]) return 2;
                            else if (numberNNN1.arrayNum[j]<numberNNN2.arrayNum[j]) return 1;
                        }
                        return 2;
                    }else if (numberNNN2.olderCoef > numberNNN1.olderCoef){
                        for(j=numberNNN1.olderCoef;i>=0;--j){
                            if(numberNNN1.arrayNum[j] > numberNNN2.arrayNum[j]) return 2;
                            else if (numberNNN1.arrayNum[j]<numberNNN2.arrayNum[j]) return 1;
                        }
                        return 1;
                    }else{
                        for(j=numberNNN1.olderCoef;i>=0;--j){
                            if(numberNNN1.arrayNum[j] > numberNNN2.arrayNum[j]) return 2;
                            else if (numberNNN1.arrayNum[j]<numberNNN2.arrayNum[j]) return 1;
                        }
                    }
*/
