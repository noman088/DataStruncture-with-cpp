// 2. Define a class Time with appropritate instance variables and member fucntions.
// Overload following operators
//      1. << insertion operator
//     2. >> extraction operator
#include <iostream>
using namespace std;
class Time
{
private:
        int hour, minute, second;

public:
        Time() {};
        Time(int h, int m, int s)
        {
                hour = h;
                minute = m;
                second = s;
        }
        friend ostream &operator<<(ostream &os, const Time &t);
        friend istream &operator>>(istream &is, Time &t)
        {

                cout << "Enter your time respectively" << endl;

                is >> t.hour >> t.minute >> t.second;
                if (t.minute >= 60)
                {
                        int hour = t.minute / 60;
                        t.hour += hour;
                        int minute = t.minute % 60;
                        t.minute = minute;
                }
                if (t.second >= 60)
                {
                        int minute = t.second / 60;
                        t.minute += minute;
                        int second = t.second % 60;
                        t.second = second;
                }
                return is;
        }
};
ostream &operator<<(ostream &os, const Time &t)
{
        os << t.hour << "Hr " << t.minute << "min " << t.second << "sec " << endl;
        return os;
}

int main()
{
        Time t(1, 2, 56), t2(3, 4, 56), t3;
        cin >> t3;
        cout << t << t2 << t3 << endl;

        return 0;
}