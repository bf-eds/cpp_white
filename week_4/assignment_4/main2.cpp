//
// Created by human on 16.09.2018.
//

#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream input{"input.txt"};
    ofstream output{"output.txt"};
    if (input && output)
    {
        string str;
        while (getline(input, str))
        {
            output << str << endl;
        }
    }

    return 0;
}