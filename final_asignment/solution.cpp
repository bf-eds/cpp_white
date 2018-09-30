//
// Created by human on 23.09.2018.
//

#include <string>
#include <set>
#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>

using namespace std;

class Date
{
public:

    Date()
    {
        year = 0;
        month = 0;
        day = 0;
    }

    Date(int year, int month, int day)
    {
        if ((month < 1) || (month > 12))
        {
            throw runtime_error("Month value is invalid: " + to_string(month));
        }

        if ((day < 1) || (day > 31))
        {
            throw runtime_error("Day value is invalid: " + to_string(day));
        }

        this->year = year;
        this->month = month;
        this->day = day;
    }

    int GetYear() const
    {
        return year;
    }

    int GetMonth() const
    {
        return month;
    }

    int GetDay() const
    {
        return day;
    }

    string GetString() const
    {
        stringstream ss;
        ss << setfill('0') << setw(4) << year << '-' << setw(2) << month << '-' << setw(2) << day;

        return ss.str();
    }

private:
    int year;
    int month;
    int day;
};

void EnsureNextSymbolAndSkip(stringstream &stream, string str)
{
    if (stream.peek() != '-')
    {
        throw runtime_error("Wrong date format: " + str);
    }
    stream.ignore(1);
}

stringstream &operator>>(stringstream &stream, Date &date)
{
    int year = 0;
    int month = 0;
    int day = 0;
    string str = stream.str();

    stream >> year;
    EnsureNextSymbolAndSkip(stream, str);
    stream >> month;
    EnsureNextSymbolAndSkip(stream, str);
    stream >> day;
    if ((stream.peek() != ' ') && !stream.eof())
    {
        throw runtime_error("Wrong date format: " + str);
    }

    date = Date(year, month, day);

    return stream;
}


bool operator<(const Date &lhs, const Date &rhs)
{
    return (lhs.GetString() < rhs.GetString());
}

class Database
{
public:
    void AddEvent(const Date &date, const string &event)
    {
        if (event.empty())
        {
            return;
        }

        records[date].insert(event);
    }

    bool DeleteEvent(const Date &date, const string &event)
    {
        if (records.count(date))
        {
            if (records.at(date).count(event))
            {
                records.at(date).erase(event);
                return true;
            }
        }

        return false;
    }

    int DeleteDate(const Date &date)
    {
        if (records.count(date))
        {
            int num = records.at(date).size();
            records.at(date).clear();
            return num;
        }
        else
        {
            return 0;
        }
    }

    string Find(const Date &date) const
    {
        string msg;
        if (records.count(date))
        {
            for (const auto &it : records.at(date))
            {
                msg += it;
                msg += '\n';
            }

        }
        return msg;
    }

    void Print() const
    {
        for (const auto &record : records)
        {
            Date d = record.first;
            string str = d.GetString();
            for (const auto &event:record.second)
            {
                cout << str + " " + event << endl;
            }
        }
    }

private:
    map<Date, set<string>> records;
};

int main()
{
    Database db;

    string command;
    try
    {
        while (getline(cin, command))
        {
            if (command.empty())
            {
                continue;
            }

            istringstream iss(command);
            string action;
            iss >> action;
            if (action == "Add")
            {
                Date date;
                string dateString;
                string event;
                iss >> dateString;
                stringstream ss(dateString);
                ss >> date;
                iss >> event;
                db.AddEvent(date, event);
            }
            else if (action == "Del")
            {
                Date date;
                string dateString;
                string event;
                iss >> dateString;
                stringstream ss(dateString);
                ss >> date;
                iss >> event;

                string msg;
                if (iss)
                {
                    if (db.DeleteEvent(date, event))
                    {
                        msg = "Deleted successfully";
                    }
                    else
                    {
                        msg = "Event not found";
                    }
                }
                else
                {
                    int num = db.DeleteDate(date);
                    msg = "Deleted " + to_string(num) + " events";
                }
                cout << msg << endl;
            }
            else if (action == "Find")
            {
                Date date;
                string dateString;
                iss >> dateString;
                stringstream ss(dateString);
                ss >> date;
                cout << db.Find(date);
            }
            else if (action == "Print")
            {
                db.Print();
            }
            else
            {
                throw runtime_error("Unknown command: " + action);
            }
        }
    }
    catch (runtime_error &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}