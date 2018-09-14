//
// Created by d.eroshenkov on 14.09.2018.
//

#include <iostream>

using namespace std;

int main()
{
    Image image = {10, 2, 6};
    Params params = {4, 2, 6};
    cout << ComputeImageWeight(params, image) << endl;
    cout << ComputeQualityByWeight(params, image, 52) << endl;
    return 0;
}