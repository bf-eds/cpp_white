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
    map<int, char> m;
    m.erase(5);
    
    int n = 10;

    vector<int> v(n);

    cout << v.size() << endl;

    v.resize(0);


    cout << v.size() << endl;
    return 0;
}