//
// Created by human on 01.09.2018.
//
#include <string>
#include <algorithm>

using namespace std;

class ReversibleString
{
public:
    ReversibleString(const string &s)
    {
        str = s;
    }

    ReversibleString() = default;

    void Reverse()
    {
        reverse(str.begin(), str.end());
    };

    string ToString() const
    {
        return str;
    };
private:
    string str;
};