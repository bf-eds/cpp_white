//
// Created by d.eroshenkov on 20.07.2018.
//

#include <string>
#include <vector>

using namespace std;

bool IsPalindrom2(std::string s)
{
    for (size_t i = 0; i < s.size() / 2; ++i)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength)
{
    vector<string> filter;

    for (auto word : words)
    {
        if (IsPalindrom2(word) && (word.length() >= minLength))
        {
            filter.push_back(word);
        }
    }

    return filter;
}