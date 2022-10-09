#include "allFunc.h"

void allVariation(int arr[][4])
{

    int i = 0;
    for (int a = 0; a < 10; ++a)
    {
        for (int b = 0; b < 10; ++b)
        {
            if (b != a)
            {
                for (int c = 0; c < 10; ++c)
                {
                    if (c != a && c != b)

                        for (int d = 0; d < 10; ++d)
                        {
                            if (d != a && d != b && d != c)
                            {
                                arr[i][0] = a;
                                arr[i][1] = b;
                                arr[i][2] = c;
                                arr[i][3] = d;
                                i += 1;
                            }
                        }
                }
            }
        }
    }
}
