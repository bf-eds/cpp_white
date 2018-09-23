//
// Created by human on 23.09.2018.
//

#include <iostream>
#include <exception>

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

        if (!denominator)
        {
            throw invalid_argument("Invalid argument");
        }

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

Rational operator*(const Rational &lhs, const Rational &rhs)
{
    return Rational(lhs.Numerator() * rhs.Numerator(), lhs.Denominator() * rhs.Denominator());
}

Rational operator/(const Rational &lhs, const Rational &rhs)
{
    if (!rhs.Numerator())
    {
        throw domain_error("Division by zero");
    }

    Rational tmp(rhs.Denominator(), rhs.Numerator());
    return (lhs * tmp);
}

bool operator==(const Rational &lhs, const Rational &rhs)
{
    return (lhs.Numerator() == rhs.Numerator()) && (lhs.Denominator() == rhs.Denominator());
}

Rational operator+(const Rational &lhs, const Rational &rhs)
{
    return Rational(lhs.Numerator() * rhs.Denominator() + rhs.Numerator() * lhs.Denominator(),
                    lhs.Denominator() * rhs.Denominator());
}

Rational operator-(const Rational &lhs, const Rational &rhs)
{
    Rational tmp(-rhs.Numerator(), rhs.Denominator());
    return (lhs + tmp);
}

istream &operator>>(istream &stream, Rational &rational)
{
    int num = 0;
    int den = 0;
    stream >> num;
    stream.ignore(1);
    stream >> den;

    if (stream)
    {
        rational = Rational(num, den);
    }
    return stream;
}

ostream &operator<<(ostream &stream, const Rational &rational)
{
    stream << rational.Numerator() << '/' << rational.Denominator();
    return stream;
}

int main()
{
    Rational first;
    Rational second;
    char operation = 0;

    try
    {
        cin >> first >> operation >> second;

        Rational res;
        if (operation == '+')
        {
            res = first + second;
        }
        else if (operation == '-')
        {
            res = first - second;
        }
        else if (operation == '*')
        {
            res = first * second;
        }
        else
        {
            res = first / second;
        }

        cout << res;
    }
    catch (invalid_argument &e)
    {
        cout << e.what();
    }
    catch (domain_error &e)
    {
        cout << e.what();
    }

    return 0;
}
