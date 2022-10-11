#include "allFunc.h"

void allVariation(vector<vector<int>> &arr, int length)
{

    // int i = 0;
    // for (int num = 1; num < 9999; ++num)
    // {
    //     // int count = 1;
    //     // while (num / 10 != 0)
    //     // {
    //     //     count += 1;
    //     // }

    //     // //cout << length << " " << count << endl;
    //     // if (count > length)
    //     // {
    //     //     break;
    //     // }
    //     // if (count == length)
    //     // {
    //     //     for (int k = length - 1; k >= 0; --k)
    //     //     {
    //     //         vector<int>::iterator m = arr.at(i).end();
    //     //         arr.at(i).insert(m, num % 10);
    //     //         num /= 10;
    //     //     }
    //     //     show(arr.at(i));
    //     // }

    //     for (int k = 0; k < length; ++k)
    //     {

    //     }

    //     i += 1;
    // }

    int i = 0;


    while (i < 2520)
    {
        for (int a = 1; a < 10; ++a)
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
                                    vector<int> res;
                                    res.push_back(a);
                                    res.push_back(b);
                                    res.push_back(c);
                                    res.push_back(d);

                                    arr.push_back(res);
                                    
                                    // cout << i << ": "; 
                                    // show(arr.at(i));
                                    i += 1;
                                }
                            }
                    }
                }
            }
        }
    }
}
