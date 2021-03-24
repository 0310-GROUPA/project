#include <iostream>
#include "numbZ.h"
#include "POZ_Z_D.h"

using namespace std;

int Sign(NUMBZ numb)
{
    int key = numb.b;

    if (numb.A)

    {
        for (int i = 0; i < numb.n + 1; ++i)
        {
            if (numb.A[i] == 0) key = 0;
        }

        if (key==0) key = 0;
        else
        {
            if (numb.b == 1) key = 1;
            else key = 2;
        }
    }

    return key;
}
