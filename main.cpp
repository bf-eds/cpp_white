#include <iostream>
#include <vector>
#include <map>
using namespace std;

void PrintVector(const vector<string> &v)
{
    for (string s : v)
    {
        cout << s << endl;
    }
}

map<string, bool> BuildReversedMap(const map<bool, string> &m)
{
    map<string, bool> result;
    for (const auto &item : m)
    {
        result[item.second] = item.first;
    }
    return result;
}

int main()
{
    map<int, string> m = {{1, "odd"},
                          {2, "even"},
                          {1, "one"}};
    m[2] = "two";
    m.erase(1);
    m[3] = "three";
    m.erase(4);
    m[5] = "five";
    cout << m.size();
    return 0;
}