//
// Created by d.eroshenkov on 13.08.2018.
//

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<vector<string>, int> buses;

    int opsNum = 0;
    cin >> opsNum;
    int i = 0;
    while (i++ < opsNum)
    {
        int stopsNum = 0;
        cin >> stopsNum;
        vector<string> stops(stopsNum);

        for (string &stop : stops)
        {
            cin >> stop;
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
