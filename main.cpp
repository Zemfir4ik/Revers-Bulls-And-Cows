#include <iostream>
#include <ctime>
#include <unistd.h>
#include <cstdlib>

using namespace std;

void show(int arr[4]);
void randomGuess(int *computerNum);
void makeNewGuess(int bulls, int cows, int *computerNum, int *tempGuess);
int **allVariation();

int main()
{
    // int computerNum[4];
    // int tempGuess[4];
    // int bulls;
    // int cows = 0;

    // randomGuess(computerNum);
    // show(computerNum);

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

    int **arr = allVariation();


    for (int i = 0; i < 5040; ++i)
    {
        show(*arr);
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

void makeNewGuess(int bulls, int cows, int *computerNum, int *tempGuess)
{
    // for (int i = 0; i < 10; ++i)
    // {
    //     f
    // }
}

int **allVariation()
{
    int **arr;

        getchar();
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
                                    // arr[i][0] = a;
                                    // arr[i][1] = b;
                                    // arr[i][2] = c;
                                    // arr[i][3] = d;
                                    cout << a * 1000 + b * 100 + c * 10 + d << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    return arr;
}
