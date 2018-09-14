//
// Created by d.eroshenkov on 10.09.2018.
//

#include <iostream>

using namespace std;

struct Specialization
{
    string specialization;

    explicit Specialization(string new_specialization)
    {
        specialization = new_specialization;
    }
};

struct Course
{
    string course;

    explicit Course(string new_course)
    {
        course = new_course;
    }
};

struct Week
{
    string week;

    explicit Week(string new_week)
    {
        week = new_week;
    }
};

struct LectureTitle
{
    string specialization;
    string course;
    string week;

    explicit LectureTitle(const Specialization &new_specialization, const Course &new_course, const Week &new_week)
    {
        specialization = new_specialization.specialization;
        course = new_course.course;
        week = new_week.week;
    }
};
