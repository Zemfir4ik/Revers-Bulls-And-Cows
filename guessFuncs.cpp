#include "allFunc.h"

void randomGuess(int *computerNum)
{
    for (int i = 0; i < 4; ++i)
    {
        computerNum[i] = rand() % 10;

        for (int c = 0; c < 5; ++c)
        {
            for (int j = 0; j < i; ++j)
            {
                if (computerNum[i] == computerNum[j])
                {
                    computerNum[i] += 1;
                    computerNum[i] %= 10;
                }
            }
        }
    }
}

void makeNewGuess(int bulls, int cows, int *computerNum, int arr[][4], int SIZE)
{
    for (int i = 0; i < SIZE; ++i)
    {
        if (compareMasCows(computerNum, arr[i]) != cows && compareMasBulls(computerNum, arr[i]) != bulls)
        {
            arr[i][0] = 0;
            arr[i][1] = 0;
            arr[i][2] = 0;
            arr[i][3] = 0;
        }
    }

    while (true)
    {
        int k = rand() % 5040;
        if (!isNull(arr[k]))
        {
            for (int i = 0; i < 4; ++i)
            {
                computerNum[i] = arr[k][i];
                arr[k][i] = 0;
            }
            show(computerNum);
            break;
        }
    }
}

bool isNull(int arr[4])
{
    for (int i = 0; i < 4; ++i)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    }
    return true;
}
