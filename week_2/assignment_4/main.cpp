//
// Created by d.eroshenkov on 20.07.2018.
//

#include <iostream>

using namespace std;

void UpdateIfGreater(const int &first, int &second);

int main()
{
    int a = 4;
    int b = 2;
    cout << a << " " << b << endl;
    UpdateIfGreater(a, b);
// b должно стать равно 4

    cout << a << " " << b << endl;

    return 0;
}
