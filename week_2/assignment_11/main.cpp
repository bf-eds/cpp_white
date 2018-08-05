//
// Created by human on 06.08.2018.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char, int> BuildCharCounters(const string &str)
{
    map<char, int> counters;

    for (auto c : str)
    {
        counters[c]++;
    }

    return counters;
}


int main()
{
    int num;

    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        string first;
        string second;

        cin >> first >> second;

        map<char, int> cntsFirst;
        map<char, int> cntsSecond;

        cntsFirst = BuildCharCounters(first);
        cntsSecond = BuildCharCounters(second);

        if (cntsFirst == cntsSecond)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

    }

    return 0;
}