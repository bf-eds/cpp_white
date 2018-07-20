#include <iostream>
#include <vector>
using namespace std;

struct Person
{
    string name;
    string surname;
    int age;
};

vector<Person> GetPopulation();

int main()
{
    vector<Person> people = GetPopulation();

    return 0;
}