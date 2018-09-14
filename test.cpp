//
// Created by d.eroshenkov on 13.07.2018.
//

#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    cout << "asdf" << endl;
    ifstream input{"text.txt"};
    string line;
    getline(input, line);
    cout << line << endl;

    return 0;
}