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

int main()
{
    map<string, string> m;

//    cout << m["one"] << endl;

    if (m["one"] == "")
    {
        cout << "empty\n";
    }

    cout << m.count("one");

    return 0;
}