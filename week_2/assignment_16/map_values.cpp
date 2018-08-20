//
// Created by d.eroshenkov on 13.08.2018.
//

#include <map>
#include <set>

using namespace std;

set<string> BuildMapValuesSet(const map<int, string> &mp)
{
    set<string> str;

    for (const auto &item : mp)
    {
        str.insert(item.second);
    }

    return str;
}