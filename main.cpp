#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string word = "babax";
    sort(begin(word), end(word));
    cout << word << " " << count(begin(word), end(word), 'a');

    return 0;
}