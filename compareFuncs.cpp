#include "allFunc.h"

int compareMasCows(int computerMas[4], int arrMas[4])
{
    int resCows = 0;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (computerMas[j] == arrMas[i] && j != i)
            {
                resCows += 1;
            }
        }
    }
    return resCows;
}

int compareMasBulls(int computerMas[4], int arrMas[4])
{
    int resBulls = 0;
    for (int j = 0; j < 4; ++j)
    {
        if (computerMas[j] == arrMas[j])
        {
            resBulls += 1;
        }
    }

    return resBulls;
}
