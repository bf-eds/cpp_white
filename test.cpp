//
// Created by d.eroshenkov on 13.07.2018.
//

#include <iostream>

using namespace std;

struct A
{
    int a;
};

A c;

int main()
{
    A a;
    a.a = 10;
    cout << a.a << endl;

    A b;
    cout << b.a << endl;

    cout << c.a << endl;
    return 0;
}