//
// Created by human on 05.08.2018.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    const unsigned int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int opsNum = 0;
    int currMonth = 0;
    vector<vector<string>> works(months[currMonth]);

    cin >> opsNum;
    int i = 0;
    while (i < opsNum)
    {
        string op;
        cin >> op;
        if (op == "ADD")
        {
            unsigned int arg = 0;
            string msg;
            cin >> arg;
            cin >> msg;
            works.at(--arg).push_back(msg);
        }
        else if (op == "NEXT")
        {
            int oldMonth = currMonth;

            if (currMonth != 11)
            {
                currMonth++;
            }
            else
            {
                currMonth = 0;
            }

            if (months[currMonth] >= months[oldMonth])
            {
                works.resize(months[currMonth]);
            }
            else
            {
                int diff = months[oldMonth] - months[currMonth];

                for (int j = diff; j > 0; --j)
                {
                    works.at(months[currMonth] - 1).insert(end(works.at(months[currMonth] - 1)), begin(works.at(months[oldMonth] - j)),
                            end(works.at(months[oldMonth] - j)));
                }
                works.resize(months[currMonth]);
            }

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