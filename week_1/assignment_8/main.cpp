//
// Created by d.eroshenkov on 18.07.2018.
//

#include <iostream>

using namespace std;

int main(void)
{
    int a;
    int b;
    int min;
    int max;

    cin >> a >> b;

    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    cout << a + b;

    return 0;
}