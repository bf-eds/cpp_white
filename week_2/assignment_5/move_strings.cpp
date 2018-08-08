//
// Created by d.eroshenkov on 20.07.2018.
//

#include <string>
#include <vector>

using namespace std;

void MoveStrings(vector<string> &src, vector<string> &dst)
{
    for (auto str : src)
    {
        dst.push_back(str);
    }

    src.clear();
}