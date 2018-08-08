//
// Created by human on 06.08.2018.
//

#include <iostream>
#include <vector>
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
        if (op == "CHANGE_CAPITAL")
        {
            string country;
            string newCapital;
            cin >> country;
            cin >> newCapital;

            if (countries[country] == "")
            {
                cout << "Introduce new country " << country << " with capital " << newCapital << endl;
                countries[country] = newCapital;
            }
            else if (countries[country] == newCapital)
            {
                cout << "Country " << country << " hasn't changed its capital" << endl;
            }
            else
            {
                cout << "Country " << country << " has changed its capital from " << countries[country] << " to "
                     << newCapital << endl;
                countries[country] = newCapital;
            }

        }
        else if (op == "RENAME")
        {
            string oldCountry;
            string newCountry;
            cin >> oldCountry >> newCountry;

            if ((newCountry == oldCountry) || (countries[oldCountry] == "") || (countries[newCountry] != ""))
            {
                cout << "Incorrect rename, skip" << endl;
            }
            else
            {
                cout << "Country " << oldCountry << " with capital " << countries[oldCountry] << " has been renamed to "
                     << newCountry << endl;
                countries[newCountry] = countries[oldCountry];
                countries.erase(oldCountry);
            }
        }
        else if (op == "ABOUT")
        {
            string country;
            cin >> country;

            if (countries[country] == "")
            {
                cout << "Country " << country << " doesn't exist" << endl;
            }
            else
            {
                cout << "Country " << country << " has capital " << countries[country] << endl;
            }
        }
        else if (op == "DUMP")
        {
            bool empty = true;
            for (const auto &item : countries)
            {
                if (item.second != "")
                {
                    cout << item.first << "/" << item.second << " ";
                    empty = false;
                }
            }

            if (empty)
            {
                cout << "There are no countries in the world";
            }
            cout << endl;
        }
        i++;
    }

    return 0;
}