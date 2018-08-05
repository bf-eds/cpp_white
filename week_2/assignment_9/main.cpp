//
// Created by human on 22.07.2018.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<bool> worried;
    int opsNum = 0;

    cin >> opsNum;
    int i = 0;
    while (i < opsNum)
    {
        string op;
        int arg = 0;
        cin >> op;
        if (op == "WORRY")
        {
            cin >> arg;
            worried[arg] = true;
        }
        else if (op == "QUIET")
        {
            cin >> arg;
            worried[arg] = false;
        }
        else if (op == "COME")
        {
            cin >> arg;

            worried.resize(worried.size() + arg, false);
        }
        else if (op == "WORRY_COUNT")
        {
            cout << count(worried.begin(), worried.end(), true) << endl;
        }

        i++;
    }

    return 0;
}