#include <iostream>
#include "MOD_PP_P.h"


polinom MOD_PP_P(polinom poly1, polinom poly2)
{
    polinom result;
    result = DIV_PP_P(poly1, poly2);  //!
    correct(result);
    result = MUL_PP_P(result, poly2); //!
    result = SUB_PP_P(poly1, result); //!
    return result;
}
