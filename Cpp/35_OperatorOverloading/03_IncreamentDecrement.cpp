
// 3. In Question 2, overload pre - increment and post-increment operator to increment
// Time object value by one second.

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
        bool operator>(Time x)
        {
                if ((hour == x.hour) && (minute == x.minute) && (second == x.second))
                        return true;
                if (hour > x.hour)
                        return true;
                else if (minute > x.minute)
                        return true;
                else if (second > x.second)
                        return true;
                else
                        return false;
        }
        void operator++(int)
        {

                this->second++;
        }
        void showtime()
        {
                cout << hour << "hr. " << minute << "minute. " << second << "s" << endl;
        }
};
int main()
{
        Time t(23, 45, 56);
        t.showtime();
        t++;
        t.showtime();

        return 0;
}