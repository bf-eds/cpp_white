//
// Created by d.eroshenkov on 22.08.2018.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num = 0;

    cin >> num;
    vector<int> ints(num);

    for (auto &item : ints)
    {
        cin >> item;
    }

    sort(ints.begin(), ints.end(), [](int x, int y)
    {
        return abs(x) < abs(y);
    });

    for (const auto &item: ints)
    {
        cout << item << " ";
    }

    return 0;
}
