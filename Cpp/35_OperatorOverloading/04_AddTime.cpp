// 4.In Question 2, Overload operator+ to add Time Objects.

#include <iostream>
using namespace std;
class Time
{
private:
        int hour, min, second;

public:
        Time() {};
        Time(int h, int m, int s)
        {
                hour = h;
                min = m;
                second = s;
        }
        bool operator>(Time x)
        {
                if ((hour == x.hour) && (min == x.min) && (second == x.second))
                        return true;
                if (hour > x.hour)
                        return true;
                else if (min > x.min)
                        return true;
                else if (second > x.second)
                        return true;
                else
                        return false;
        }
        Time operator+(Time X)
        {
                Time temp;
                temp.hour = hour + X.hour;
                temp.min = min + X.min;
                temp.second = second + X.second;
                if (temp.min >= 60)
                {
                        int hour = temp.min / 60;
                        temp.hour += hour;
                        int min = temp.min % 60;
                        temp.min = min;
                }
                if (temp.second >= 60)
                {
                        int min = temp.second / 60;
                        temp.min += min;
                        int second = temp.second % 60;
                        temp.second = second;
                }
                return temp;
        }
        void showtime()
        {
                cout << hour << "hr. " << min << "minute. " << second << "s" << endl;
        }
};
int main()
{
        Time t(3, 444, 444), t2(3, 444, 444), t3;
        t3 = (t + t2);
        t3.showtime();

        return 0;
}