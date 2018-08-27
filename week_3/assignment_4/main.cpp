//
// Created by d.eroshenkov on 27.08.2018.
//

#include <iostream>
#include "names1.cpp"

using namespace std;

int main()
{
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990})
    {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970})
    {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970})
    {
        cout << person.GetFullName(year) << endl;
    }


//    person.ChangeFirstName(1965, "Polina");
//    person.ChangeLastName(1963, "Sergeeva");
//    person.ChangeFirstName(1966, "Appolinaria");
//
//    cout << person.GetFullName(1960) << endl;
//    cout << person.GetFullName(1964) << endl;
//    cout << person.GetFullName(1965) << endl;
//    cout << person.GetFullName(1966) << endl;
//    cout << person.GetFullName(1970) << endl;

    return 0;
}