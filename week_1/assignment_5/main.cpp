//
// Created by d.eroshenkov on 18.07.2018.
//

#include <iostream>

using namespace std;

int main()
{
    double n;
    double a;
    double b;
    double x;
    double y;

    cin >> n >> a >> b >> x >> y;

    if (n > b)
    {
        n *= (100 - y) / 100;
    }
    else if (n > a)
    {
        n *= (100 - x) / 100;
    }

    cout << n;

    return 0;
}