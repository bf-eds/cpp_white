//
// Created by human on 06.08.2018.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    map<string, string> countries;

    int opsNum;
    cin >> opsNum;
    int i = 0;
    while (i < opsNum)
    {
        string op;
        cin >> op;
        if (op == "CHANGE_CAPITAL ")
        {
            string country;
            string new_capital;
            cin >> country;
            cin >> new_capital;

            if (countries[country] == "")
            {
                cout << "Introduce new country " << country << " with capital " << new_capital << endl;
            }
            else if (countries[country] == new_capital)
            {
                cout << "Country " << country << " hasn't changed its capital" << endl;
            }
            else
            {
                cout << "Country " << country << " has changed its capital from " << countries[country] << " to " << new_capital << endl;
            }

        }
        else if (op == "RENAME old_country_name new_country_name")
        {
            string oldCountry;
            string newCountry;
            cin >> oldCountry;
            cin >> newCountry;

        }
        else if (op == "DUMP")
        {
            int arg = 0;
            cin >> arg;
            --arg;

            cout << works.at(arg).size() << " ";

            for (auto item : works.at(arg))
            {
                if (item != "")
                {
                    cout << item << " ";

                }
            }

            cout << endl;
        }

        i++;
    }

    return 0;
}