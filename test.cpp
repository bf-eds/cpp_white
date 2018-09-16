//
// Created by d.eroshenkov on 13.07.2018.
//

#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream input{"data.txt"};
    ofstream os;
    string year;
    string month;
    string day;

    if (input.open)
    {
        getline(input, year, '-');
        getline(input, month, '-');
        getline(input, day);
    }
    else
    {
        cout << "Error while open file" << endl;
    }

    cout << year << ' ' << month << ' ' << day << endl;

    return 0;
}