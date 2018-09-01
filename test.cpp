//
// Created by d.eroshenkov on 13.07.2018.
//

#include <iostream>

using namespace std;

class Numb
{
public:
    Numb(int a, int b)
    {
        x = a;
        y = b;
    }

private:
    int x;
    int y;
};

int main()
{
//    Numb numb(1, 2);
    Numb numb2;
    cout << numb2.x << "" << numb2.y << endl;
    return 0;
}