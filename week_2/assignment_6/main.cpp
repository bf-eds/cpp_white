//
// Created by human on 21.07.2018.
//

#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int> &v);

int main()
{
    vector<int> numbers = {1, 5, 3, 4, 2, 6};

    for (auto i : numbers)
    {
        cout << i << ", ";
    }

    cout << endl;

    Reverse(numbers);

    for (auto i : numbers)
    {
        cout << i << ", ";
    }

    return 0;
}
