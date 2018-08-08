//
// Created by d.eroshenkov on 20.07.2018.
//

#include <iostream>
#include <vector>

using namespace std;

void MoveStrings(vector<string> &src, vector<string> &dst);

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
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};

    PrintStringVector(source);
    PrintStringVector(destination);
    MoveStrings(source, destination);
    PrintStringVector(source);
    PrintStringVector(destination);

    return 0;
}