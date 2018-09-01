//
// Created by human on 02.09.2018.
//

#include "incognizable.cpp"

#include <iostream>

using namespace std;

int main()
{
    Incognizable a;

    cout << a.x << " " << a.y << endl;

    Incognizable b = {};

    cout << b.x << " " << b.y << endl;

    Inco in1;
    cout << in1.x << " " << in1.y << endl;
    Inco in2 = {5, 7};
    cout << in2.x << " " << in2.y << endl;


    Incognizable c = {0};
    Incognizable d = {0, 1};
    return 0;
}