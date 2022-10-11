#include "allFunc.h"

int compareMasCows(vector<int> computerMas, vector<int> &arrMas)
{
    int resCows = 0;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (computerMas[j] == arrMas[i] && i != j)
            {
                resCows += 1;
            }
        }
    }
    return resCows;
}

int compareMasBulls(vector<int> computerMas, vector<int> &arrMas)
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
