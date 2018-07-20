//
// Created by d.eroshenkov on 19.07.2018.
//

#include <string>

bool IsPalindrom(std::string str)
{
    std::string::reverse_iterator rit = str.rbegin();
    std::string::iterator it = str.begin();

    for (; rit != str.rend(); rit++, it++)
    {
        if (*rit != *it)
        {
            return false;
        }
    }

    return true;
}

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