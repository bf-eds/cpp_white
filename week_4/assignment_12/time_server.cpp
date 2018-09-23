//
// Created by human on 23.09.2018.
//

#include <iostream>
#include <exception>
#include <string>
using namespace std;

string AskTimeServer()
{
    /* Для тестирования повставляйте сюда код, реализующий различное поведение этой функии:
       * нормальный возврат строкового значения
       * выброс исключения system_error
       * выброс другого исключения с сообщением.
    */
//    throw exception();
//    return "12:13:15";

}

class TimeServer
{
public:
    string GetCurrentTime()
    {
        try
        {
            LastFetchedTime = AskTimeServer();
        }
        catch (system_error &e)
        {
            cout << "exc" << endl;
        }
        return LastFetchedTime;
    }

private:
    string LastFetchedTime = "00:00:00";
};

int main()
{
    TimeServer ts;
    try
    {
        cout << ts.GetCurrentTime() << endl;
    }
    catch (exception &e)
    {
        cout << "Exception got: " << e.what() << endl;
    }
    return 0;
}
