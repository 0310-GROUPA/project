#include "FAC_P_Q.h"

numberR FAC_P_Q(polinom pol1)
{
    NaturalNumber nok,nod,num3;
    numberR resu;
    /*nod = pol1[0]
    * nok = pol1[0]
    */
    nok = pol1.arrayNum[0].natural;
    num3 = ABS_Z_N(pol1.arrayNum[0].whole);
    nod = num3;
    for (int i = 1; i < pol1.olderCoef+1; i++)
    {
        /*if nok != pol1[i]*/
        if (COM_NN_D(nok, pol1.arrayNum[i].natural))
        {
            /*nok = nok(nok,pol1[i])*/
            nok = LCM_NN_N(nok, pol1.arrayNum[i].natural);
        }
        /*num3 = pol1[i]*/
        num3 = ABS_Z_N(pol1.arrayNum[i].whole);
        /*if nod != num3*/
        if (COM_NN_D(nod, num3))
        {
            /*nod = nod(nod,num3)*/
            nod = GCF_NN_N(nod, num3);
        }
    }
    /*resu = nok/nod*/
    resu.natural = nok;
    resu.whole = TRANS_N_Z(nod);
    return resu;
}

/*Created by Kononov Alexandr*/
