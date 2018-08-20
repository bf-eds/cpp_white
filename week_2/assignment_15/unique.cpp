//
// Created by d.eroshenkov on 13.08.2018.
//

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int size = 0;
    cin >> size;

    set<string> uniqs;

    while (size--)
    {
        string str;
        cin >> str;
        uniqs.insert(str);
    }

    cout << uniqs.size() << endl;

    return 0;
}