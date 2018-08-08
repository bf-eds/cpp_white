//
// Created by d.eroshenkov on 18.07.2018.
//

#include <iostream>

using namespace std;

int main()
{
    string str;

    cin >> str;

    int i = 0;
    int cnt = 0;
    for (auto c : str)
    {
        if (c == 'f')
        {
            cnt++;

            if (cnt == 2)
            {
                break;
            }
        }

        i++;
    }

    if (cnt == 1)
    {
        cout << -1;
    }
    else if (cnt == 0)
    {
        cout << -2;
    }
    else
    {
        cout << i;
    }

    return 0;
}