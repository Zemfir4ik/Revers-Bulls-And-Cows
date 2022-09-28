#include <iostream>
#include <ctime>
#include <unistd.h>
#include <cstdlib>

using namespace std;

void show(int arr[4]);

int main()
{
    int computerNum[4];
    int bulls;
    int cows;

    srand(time(NULL));

    while (true)
    {

        // создание рандомного набора чисел
        for (int i = 0; i < 4; ++i)
        {
            computerNum[i] = rand() % 10;

            for (int c = 0; c < 5; ++c)
            {
                for (int j = 0; j <= i; ++j)
                {
                    if (computerNum[i] == computerNum[i - j])
                    {
                        computerNum[i] += 1;
                        computerNum[i] %= 10;
                    }
                }
            }
        }
        
        show(computerNum);

        cout << "Сколько быков?" << endl;
        cin >> bulls;
        {
            if (bulls == 4)
            {
                break;
            }
        }

        cout << "Сколько коров?" << endl;
        cin >> cows;
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
