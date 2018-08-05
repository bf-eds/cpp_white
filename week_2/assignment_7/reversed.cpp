//
// Created by human on 21.07.2018.
//

#include <vector>

using namespace std;

void Reverse(vector<int> &v)
{
    int lenght = v.size();

    for (int i = 0; i < lenght / 2; i++)
    {
        int tmp = v[i];
        v[i] = v[lenght - i - 1];
        v[lenght - i - 1] = tmp;
    }
}

vector<int> Reversed(const vector<int>& v)
{
    auto reversed = v;
    Reverse(reversed);

    return reversed;
}