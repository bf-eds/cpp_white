//
// Created by d.eroshenkov on 18.07.2018.
//

#include <iostream>

using namespace std;

int main(void)
{
    int a;
    int b;

    cin >> a >> b;

    while (a <= b)
    {
        if ((a % 2) == 0)
        {
            cout << a << " ";
        }

        a++;
    }

    return 0;
}