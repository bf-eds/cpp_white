//
// Created by d.eroshenkov on 13.08.2018.
//

#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
    map<set<string>, int> buses;

    int opsNum = 0;
    cin >> opsNum;
    int i = 0;
    while (i++ < opsNum)
    {
        int stopsNum = 0;
        cin >> stopsNum;
        set<string> stops;

        while (stopsNum--)
        {
            string stop;
            cin >> stop;

            stops.insert(stop);
        }

        if (buses.count(stops) != 0)
        {
            cout << "Already exists for " << buses[stops] << endl;
        }
        else
        {
            int newNum = buses.size();
            buses[stops] = ++newNum;
            cout << "New bus " << newNum << endl;
        }
    }

    return 0;
}