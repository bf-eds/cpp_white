//
// Created by human on 16.09.2018.
//

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream input{"input.txt"};

    if (input)
    {
        int raw = 0;
        int column = 0;

        input >> raw;
        input >> column;

        for (int i = 0; i < raw; ++i)
        {
            for (int j = 0; j < column; ++j)
            {
                int x = 0;
                input >> x;
                input.ignore(1);
                cout << setw(10) << x;

                if (j != column - 1)
                {
                    cout << " ";
                }

            }
            if (i != raw - 1)
            {
                cout << endl;
            }
        }
    }

    return 0;
}