//
// Created by d.eroshenkov on 08.08.2018.
//

#include <iostream>
#include <map>
#include <vector>

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
            string stop;
            cin >> stop;

            bool exist = false;

            for (const auto &bus : buses)
            {
                for (const auto &existStop : bus.begin()->second)
                {
                    if (existStop == stop)
                    {
                        exist = true;
                        cout << bus.begin()->first << " ";
                        break;
                    }
                }
            }

            if (!exist)
            {
                cout << "No stop";
            }

            cout << endl;
        }
        else if (op == "STOPS_FOR_BUS")
        {

        }
        else if (op == "ALL_BUSES")
        {
            vector<map<string, vector<string>>> busesAsc = buses;
            sort(busesAsc.begin(), busesAsc.end());

            if (buses.empty())
            {
                cout << "No buses" << endl;
            }

            for (const auto &bus : busesAsc)
            {
                cout << "Bus " << bus.begin()->first << ": ";

                for (const auto &stop : bus.begin()->second)
                {
                    cout << stop << " ";
                }

                cout << endl;
            }
        }
    }

    return 0;
}

