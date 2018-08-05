//
// Created by human on 21.07.2018.
//
#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int> &v);
vector<int> Reversed(const vector<int> &v);

int main()
{
    vector<int> numbers = {1, 5, 3, 4, 2, 6};

    for (auto i : numbers)
    {
        cout << i << ", ";
    }

    cout << endl;

    vector<int> reversed = Reversed(numbers);

    for (auto i : reversed)
    {
        cout << i << ", ";
    }

    cout << endl;

    return 0;
}