//
// Created by d.eroshenkov on 19.07.2018.
//

#include <iostream>

using namespace std;

bool isPalindrom(string str);

int main()
{
    string str;
    cin >> str;

    string msg = "false";

    if (isPalindrom(str))
    {
        msg = "true";
    }

    cout << msg;

    return 0;
}