//
// Created by d.eroshenkov on 27.08.2018.
//

#include <iostream>
#include "names2.cpp"

using namespace std;

int main()
{
    Person person;

//    person.ChangeFirstName(1965, "Polina");
//    person.ChangeLastName(1967, "Sergeeva");
//    for (int year : {1900, 1965, 1990})
//    {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    person.ChangeFirstName(1970, "Appolinaria");
//    for (int year : {1969, 1970})
//    {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    person.ChangeLastName(1968, "Volkova");
//    for (int year : {1969, 1970})
//    {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    person.ChangeFirstName(1990, "Polina");
//    person.ChangeLastName(1990, "Volkova-Sergeeva");
//    cout << person.GetFullNameWithHistory(1990) << endl;
//
//    person.ChangeFirstName(1966, "Pauline");
//    cout << person.GetFullNameWithHistory(1966) << endl;
//
//    person.ChangeLastName(1960, "Sergeeva");
//    for (int year : {1960, 1967})
//    {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    person.ChangeLastName(1961, "Ivanova");
//    cout << person.GetFullNameWithHistory(1967) << endl;

    person.ChangeFirstName(1900, "Eugene");
    person.ChangeLastName(1900, "Sokolov");
    person.ChangeLastName(1910, "Sokolov");
    person.ChangeFirstName(1920, "Evgeny");
    person.ChangeLastName(1930, "Sokolov");
    cout << person.GetFullNameWithHistory(1940) << endl;

    return 0;
}