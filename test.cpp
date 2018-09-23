//
// Created by d.eroshenkov on 13.07.2018.
//


#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

int Aggressive()
{
    throw runtime_error("fail");
    return 2;
}

int main()
{
    try
    {
        cout << Aggressive() << endl;
    }
    catch (const exception &ex)
    {
        cout << "exception: " << ex.what() << endl;
    }
    return 0;
}