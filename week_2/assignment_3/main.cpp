//
// Created by d.eroshenkov on 20.07.2018.
//

#include <iostream>
#include <vector>

using namespace std;

vector<string> PalindromFilter(vector<string> words, int minLength);

void PrintStringVector(vector<string> str)
{
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i].c_str();

        if (i != (str.size() - 1))
        {
            cout << ", ";
        }

    }

    cout << endl;
}

int main()
{
    vector<string> v1 = {"abacaba", "aba"};
    vector<string> v2 = {"weew", "bro", "code"};

    vector<string> res;

    res = PalindromFilter(v1, 5);
    PrintStringVector(res);

    res = PalindromFilter(v1, 2);
    PrintStringVector(res);

    res = PalindromFilter(v2, 4);
    PrintStringVector(res);

    return 0;
}