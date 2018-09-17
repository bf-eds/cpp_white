//
// Created by d.eroshenkov on 17.09.2018.
//

#include <iostream>
#include <vector>

using namespace std;

struct Student
{
    string name;
    string surname;
    int birthDay = 0;
    int birthMonth = 0;
    int birthYear = 0;
};

int main()
{
    vector<Student> students;
    unsigned int number = 0;

    cin >> number;
    while (number--)
    {
        Student pupil;
        cin >> pupil.name;
        cin >> pupil.surname;
        cin >> pupil.birthDay;
        cin >> pupil.birthMonth;
        cin >> pupil.birthYear;
        students.push_back(pupil);
    }

    cin >> number;
    while (number--)
    {
        string request;
        cin >> request;

        int n = 0;
        cin >> n;

        if ((n < 1) || (n > students.size()))
        {
            request = "bad";
        }

        --n;
        if (request == "name")
        {
            cout << students.at(n).name << " " << students.at(n).surname << endl;
        }
        else if (request == "date")
        {
            cout << students.at(n).birthDay << '.' << students.at(n).birthMonth << '.' << students.at(n).birthYear
                 << endl;
        }
        else
        {
            cout << "bad request" << endl;
        }
    }

    return 0;
}
