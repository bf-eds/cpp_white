//
// Created by d.eroshenkov on 13.08.2018.
//
#include <map>
#include <set>
#include <iostream>

using namespace std;

set<string> BuildMapValuesSet(const map<int, string> &mp);

int main()
{
    set<string> values = BuildMapValuesSet({{1, "odd"},
                                            {2, "even"},
                                            {3, "odd"},
                                            {4, "even"},
                                            {5, "odd"}});

    for (const string &value : values)
    {
        cout << value << endl;
    }

    return 0;
}