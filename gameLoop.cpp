#include "allFunc.h"

int gameLoop()
{

    // int length = getSizeOfCombination();

    // int size = getCountOfAllVariations(length);
    
    vector<int> computerNum(4);

    int bulls;
    int cows;
    int attemps = 1;


    int length = 1;
    int size = 1;


    randomGuess(computerNum);
    show(computerNum);

    vector<vector<int>> possibleAnswer;
    allVariation(possibleAnswer, length);

    //show(possibleAnswer.at(4535));

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

        makeNewGuess(bulls, cows, computerNum, possibleAnswer, size);
        attemps += 1;
    }

    cout << "Потребовалось " << attemps << " попыток, чтобы угадать" << endl;

    return 1;
}


void show(vector<int> arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr.at(i);
    }
    cout << endl;
}

int getSizeOfCombination()
{
    int size;
    cout << "Введите длину загаданного числа" << endl;
    cin >> size;
    return size;
}

int getCountOfAllVariations(int length)
{
    int res = 9;
    for (int i = length - 1; i > 0; --i)
    {
        res *= (10 - i);
    }
    return res;
}