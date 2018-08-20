//
// Created by d.eroshenkov on 13.08.2018.
//
#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    map<string, set<string>> synonyms;
    int opsNum = 0;
    cin >> opsNum;
    int i = 0;
    while (i++ < opsNum)
    {
        string op;
        cin >> op;
        if (op == "ADD")
        {
            string word1;
            string word2;

            cin >> word1 >> word2;

            synonyms[word1].insert(word2);
            synonyms[word2].insert(word1);
        }
        else if (op == "COUNT")
        {
            string word;

            cin >> word;

            cout << synonyms[word].size() << endl;
        }
        else if (op == "CHECK")
        {
            string word1;
            string word2;

            cin >> word1 >> word2;

            if (synonyms[word1].count(word2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}