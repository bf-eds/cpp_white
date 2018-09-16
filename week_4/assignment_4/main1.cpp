//
// Created by human on 16.09.2018.
//

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream input{"input.txt"};

    if (input)
    {
        string str;
        while (getline(input, str))
        {
            cout << str << endl;
        }
    }

    return 0;
}