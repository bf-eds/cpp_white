//
// Created by d.eroshenkov on 27.08.2018.
//

#include <string>
#include <map>
#include <vector>

using namespace std;

class Person
{
public:
    void ChangeFirstName(int year, const string &first_name)
    {
        // добавить факт изменения имени на first_name в год year
        records[year].firstName = first_name;
    }

    void ChangeLastName(int year, const string &last_name)
    {
        // добавить факт изменения фамилии на last_name в год year
        records[year].lastName = last_name;
    }

    string GetFullName(int year)
    {
        // получить имя и фамилию по состоянию на конец года year

        string first;
        string last;

        for (auto item : records)
        {
            if (item.first <= year)
            {
                if (!item.second.firstName.empty())
                {
                    first = item.second.firstName;
                }

                if (!item.second.lastName.empty())
                {
                    last = item.second.lastName;
                }
            }
            else
            {
                break;
            }
        }

        string result;

        if (first.empty())
        {
            if (last.empty())
            {
                result = "Incognito";
            }
            else
            {
                result = last + " with unknown first name";
            }
        }
        else if (last.empty())
        {
            result = first + " with unknown last name";
        }
        else
        {
            result = first + " " + last;
        }

        return result;

    }

    string GetFullNameWithHistory(int year)
    {
        // получить все имена и фамилии по состоянию на конец года year
        // получить имя и фамилию по состоянию на конец года year

        vector<string> first;
        vector<string> last;

        for (auto item : records)
        {
            if (item.first <= year)
            {
                if (!item.second.firstName.empty() && (first.empty() || (item.second.firstName != first.back())))
                {
                    first.push_back(item.second.firstName);
                }

                if (!item.second.lastName.empty() && (last.empty() || item.second.lastName != last.back()))
                {
                    last.push_back(item.second.lastName);
                }
            }
            else
            {
                break;
            }
        }

        string result;

        if (first.empty())
        {
            if (last.empty())
            {
                result = "Incognito";
            }
            else
            {
                result += GetNames(last);
                result += " with unknown first name";
            }
        }
        else
        {
            if (last.empty())
            {
                result += GetNames(first);
                result += " with unknown last name";
            }
            else
            {
                result += GetNames(first);
                result += " ";
                result += GetNames(last);
            }

        }

        return result;

    }

private:
    struct Name
    {
        string firstName;
        string lastName;
    };
    map<int, Name> records;

    string GetNames(const vector<string> &name)
    {
        string result;

        result += name.back();

        if (name.size() > 1)
        {
            result += " (";
            result += name[name.size() - 2];
        }

        for (int i = name.size() - 3; i >= 0; i--)
        {
            result += ", ";
            result += name[i];
        }

        if (name.size() > 1)
        {
            result += ")";
        }

        return result;
    }
};