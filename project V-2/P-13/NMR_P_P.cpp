#include"NMR_P_P.h"

numberR NMR_P_P(polinom P){
    numberR res;

    res = FAC_P_Q(DIV_PP_P(P,GCF_PP_P(P,DER_P_P(P))));  //!
//find the gcd of the polynomial and its derivative, divide the polynomial by this gcd,
// then derivation the LCM of the denominators of the coefficients and the GCD of the numerators from the resulting polynomial
    res = RED_Q_Q(res); //!
    return res;
}
/*Created by Gorshenin Aleksandr*/
