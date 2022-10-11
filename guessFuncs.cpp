#include "allFunc.h"

void randomGuess(vector<int> &computerNum)
{
    int size = computerNum.size();

    computerNum[0] = rand() % 9 + 1;
    for (int i = 1; i < 4; ++i)
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

bool isRetry(vector<int> arr)
{
    for (int i = 1; i < arr.size(); ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (arr.at(i) == arr.at(j))
            {
                return true;
            }
        }
    }
    return false;
}

void makeNewGuess(int bulls, int cows, vector<int> &computerNum, vector<vector<int>> &arr, int size)
{
    int count = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (compareMasCows(computerNum, arr.at(i)) != cows && compareMasBulls(computerNum, arr.at(i)) != bulls)
        {
            vector<vector<int>>::iterator it = arr.begin();
            count += 1;
            arr.erase(it + i);
        }
    }
    //cout << count << " is del" << endl;

    // for (int k = 0; k < arr.size(); ++k)
    // {
    //     if (true)//!isNull(arr.at(k)))
    //     {
    //         cout << "1" << endl;
    //         for (int i = 0; i < 4; ++i)
    //         {
    //             computerNum.at(i) = arr.at(k).at(i);
    //             // arr.at(k).at(i) = 0;
    //         }
    //         arr.at(k).clear();
    //         cout << "1" << endl;
    //         show(computerNum);
    //         break;
    //     }
    // }
    // for (int i = 0; i < 4; ++i)
    // {
    //     computerNum.at(i) = arr.at(k).at(i);
    // }

    // show(arr.at(0));
    for (int i = 0; i < 4; ++i)
    {
        computerNum.at(i) = arr.at(0).at(i);
    }
    vector<vector<int>>::iterator it = arr.begin();
    arr.erase(it);
    show(computerNum);
}

bool isNull(vector<int> arr)
{
    for (int i = 0; i < 4; ++i)
    {
        if (arr.at(i) != 0)
        {
            return false;
        }
    }
    return true;
}
