#include <iostream>
#include <ctime>
#include <unistd.h>
#include <cstdlib>

using namespace std;

void show(int arr[4]);
void randomGuess(int *computerNum);
void makeNewGuess(int bulls, int cows, int *computerNum, int arr[][4], int SIZE);
void allVariation(int arr[5040][4]);
int compareMas(int computerMas[4], int arrMas[4]);
bool isNull(int arr[4]);

int main()
{
    int SIZE = 5040;
    int computerNum[4];
    // int tempGuess[4];
    int bulls;
    int cows;

    srand(time(NULL));

    randomGuess(computerNum);
    show(computerNum);

    // while (true)
    // {
    //     makeNewGuess(bulls, cows, computerNum, tempGuess);

    //     cout << "Сколько быков?" << endl;
    //     cin >> bulls;

    //     if (bulls == 4)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         cout << "Сколько коров?" << endl;
    //         cin >> cows;
    //     }
    // }

    int arr[SIZE][4];
    allVariation(arr);

    // for (int i = 0; i < SIZE; ++i)
    // {
    //     show(arr[i]);
    // }

    while (true)
    {
        cout << "Сколько быков?" << endl;
        cin >> bulls;

        if (bulls == 4)
        {
            break;
        }
        else
        {
            cout << "Сколько коров?" << endl;
            cin >> cows;
        }

        makeNewGuess(bulls, cows, computerNum, arr, SIZE);
    }
}

void show(int arr[4])
{
    for (int i = 0; i < 4; ++i)
    {
        cout << arr[i];
    }
    cout << endl;
}

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
        if (compareMas(computerNum, arr[i]) != cows)
        {
            arr[i][0] = 0;
            arr[i][1] = 0;
            arr[i][2] = 0;
            arr[i][3] = 0;
        }
    }

    for (int k = 0; k < SIZE; ++k)
    {
        if (!isNull(arr[k]))
        {
            for (int i = 0; i < 4; ++i)
            {
                computerNum[i] = arr[k][i];
            }
            show(computerNum);
            break;
        }
    }
}

void allVariation(int arr[][4])
{

    int i = 0;
    for (int a = 0; a < 10; ++a)
    {
        for (int b = 0; b < 10; ++b)
        {
            if (b == a)
            {
                continue;
            }
            else
            {
                for (int c = 0; c < 10; ++c)
                {
                    if (c == a || c == b)
                    {
                        continue;
                    }
                    else
                    {
                        for (int d = 0; d < 10; ++d)
                        {
                            if (d == a || d == b || d == c)
                            {
                                continue;
                            }
                            else
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
}

int compareMas(int computerMas[4], int arrMas[4])
{
    int resCows = 0;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (computerMas[j] == arrMas[i])
            {
                resCows += 1;
            }
        }
    }
    return resCows;
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
