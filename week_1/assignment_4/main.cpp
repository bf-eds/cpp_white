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

    if (b == 0)
    {
        cout << "Impossible";
    }
    else
    {
        cout << a / b;
    }

    return 0;
}