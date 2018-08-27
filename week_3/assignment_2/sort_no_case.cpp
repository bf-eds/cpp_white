//
// Created by d.eroshenkov on 22.08.2018.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int num = 0;

    cin >> num;
    map<string, string> strs;
    vector<string> strsNoCase;

    while (num--)
    {
        string strCase;
        string strNoCase;
        cin >> strCase;
        strNoCase = strCase;

        for (auto &item : strNoCase)
        {
            item = tolower(item);
        }

        strs[strNoCase] = strCase;
        strsNoCase.push_back(strNoCase);
    }

    sort(strsNoCase.begin(), strsNoCase.end());

    for (const auto &item: strsNoCase)
    {
        cout << strs[item] << " ";
    }

    return 0;
}
