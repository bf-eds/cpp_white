//
// Created by d.eroshenkov on 19.07.2018.
//

#include <iostream>

using namespace std;

int Factorial(int a)
{
    if (a < 0)
    {
        return 1;
    }
    else if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * Factorial(a - 1);
    }
}

int main(void)
{
    int x;

    cin >> x;

    cout << Factorial(x);

    return 0;
}