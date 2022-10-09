#include "allFunc.h"

int gameLoop()
{
    int SIZE = 5040;
    int computerNum[4];
    int bulls;
    int cows;
    int attemps = 1;

    randomGuess(computerNum);
    show(computerNum);

    int arr[SIZE][4];
    allVariation(arr);

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

        cout << "___________________" << endl;
        cout << endl;

        makeNewGuess(bulls, cows, computerNum, arr, SIZE);
        attemps += 1;
    }

    cout << "It taked " << attemps << " attemps to guess" << endl;

    return 1;
}


void show(int arr[4])
{
    for (int i = 0; i < 4; ++i)
    {
        cout << arr[i];
    }
    cout << endl;
}
