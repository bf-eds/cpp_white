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

class Task
{
public:
    void MakeRandom()
    { /* ... */ }

    void GetText()
    {
    }

    string text;
};

int main()
{
    Task task;
    task.MakeRandom();
    cout << task.GetText() << endl;
    return 0;
}