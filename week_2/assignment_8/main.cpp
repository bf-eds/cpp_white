//
// Created by human on 22.07.2018.
//

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> nums(n);
    int aver = 0;

    for (auto &num : nums)
    {
        cin >> num;
        aver += num;
    }

    aver /= nums.size();

    vector<int> averNum;

    for (auto i = 0; i < nums.size(); i++)
    {
        if (nums[i] > aver)
        {
            averNum.push_back(i);
        }
    }

    cout << averNum.size() << endl;

    for (auto &num : averNum)
    {
        cout << num << " ";
    }

    return 0;
}