//
// Created by human on 22.09.2018.
//
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

class Rational
{
public:
    Rational()
    {
        numerator = 0;
        denominator = 1;
    }

    Rational(int new_numerator, int new_denominator)
    {
        numerator = new_numerator;
        denominator = new_denominator;

        if (!numerator)
        {
            denominator = 1;
            return;
        }

        auto div = gcd(abs(numerator), abs(denominator));
        if (div != 1)
        {
            numerator /= div;
            denominator /= div;
        }

        if (denominator < 0)
        {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    int Numerator() const
    {
        return numerator;
    }

    int Denominator() const
    {
        return denominator;
    }

private:
    int numerator;
    int denominator;

    int gcd(int a, int b)
    {
        while (a != b)
        {
            if (a > b)
            {
                int tmp = a;
                a = b;
                b = tmp;
            }
            b = b - a;
        }
        return a;
    }
};

bool operator==(const Rational &lhs, const Rational &rhs)
{
    return (lhs.Numerator() == rhs.Numerator()) && (lhs.Denominator() == rhs.Denominator());
}

bool operator<(const Rational &lhs, const Rational &rhs)
{
    long lv = lhs.Numerator() * rhs.Denominator();
    long rv = rhs.Numerator() * lhs.Denominator();

    return (lv < rv);
}

//Rational operator+(const Rational &lhs, const Rational &rhs)
//{
//    return Rational(lhs.Numerator() * rhs.Denominator() + rhs.Numerator() * lhs.Denominator(),
//                    lhs.Denominator() * rhs.Denominator());
//}
//
//Rational operator-(const Rational &lhs, const Rational &rhs)
//{
//    Rational tmp(-rhs.Numerator(), rhs.Denominator());
//    return (lhs + tmp);
//}

// Реализуйте для класса Rational оператор(ы), необходимые для использования его
// в качестве ключа map'а и элемента set'а

int main()
{
    {
        const set<Rational> rs = {{1, 2},
                                  {1, 25},
                                  {3, 4},
                                  {3, 4},
                                  {1, 2}};
        if (rs.size() != 3)
        {
            cout << "Wrong amount of items in the set" << endl;
            return 1;
        }

        vector<Rational> v;
        for (auto x : rs)
        {
            v.push_back(x);
        }
        if (v != vector<Rational>{{1, 25},
                                  {1, 2},
                                  {3, 4}})
        {
            cout << "Rationals comparison works incorrectly" << endl;
            return 2;
        }
    }

    {
        map<Rational, int> count;
        ++count[{1, 2}];
        ++count[{1, 2}];

        ++count[{2, 3}];

        if (count.size() != 2)
        {
            cout << "Wrong amount of items in the map" << endl;
            return 3;
        }
    }

    cout << "OK" << endl;
    return 0;
}

