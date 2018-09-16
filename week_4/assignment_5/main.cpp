//
// Created by human on 16.09.2018.
//

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream input{"input.txt"};

    if (input)
    {
        double num;

        cout << fixed << setprecision(3);
        while (input >> num)
        {
            cout << num << endl;
        }
    }

    return 0;
}