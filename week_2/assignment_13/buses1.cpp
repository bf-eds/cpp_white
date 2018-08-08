//
// Created by d.eroshenkov on 08.08.2018.
//

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<map<string, vector<string>>> buses;
    int opsNum = 0;
    cin >> opsNum;
    int i = 0;
    while (i++ < opsNum)
    {
        string op;
        cin >> op;
        if (op == "NEW_BUS")
        {
            string busName;
            int stopCount = 0;
            string stop;
            map<string, vector<string>> bus;
            vector<string> stops;

            cin >> busName >> stopCount;

            while (stopCount--)
            {
                cin >> stop;
                stops.push_back(stop);
            }

            bus[busName] = stops;
            buses.push_back(bus);
        }
        else if (op == "BUSES_FOR_STOP")
        {

        }
        else if (op == "STOPS_FOR_BUS")
        {

        }
        else if (op == "ALL_BUSES")
        {
            vector<map<string, vector<string>>> busesAsc = buses;
            sort(busesAsc.begin(), busesAsc.end());

            for (auto bus : busesAsc)
            {
                cout << "Bus " << bus.begin().
            }
        }
    }

    return 0;
}

