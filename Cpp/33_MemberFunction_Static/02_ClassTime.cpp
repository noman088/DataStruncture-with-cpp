/*

2.Define a class Time to represent a time with instance variables h , m and s to store
hour  , minute and second . Also define following member fucntions
    1. void setTime(int, int, int )
    2. void showTime()
    3. void normalize()
    4. Time add(Time)
    5. bool is_greater(Time)

*/

#include <iostream>
using namespace std;
class Time
{
private:
    int min, sec, hr;

public:
    void setTime(int h, int m, int s)
    {

        hr = h;
        min = m;
        sec = s;
    }
    void showTime()
    {
        cout << hr << "hr  " << min << "min " << sec << "sec " << endl;
    }
    void normalize() {}
    Time add(Time t)
    {
        Time temp;
        temp.hr = t.hr + hr;
        temp.min = t.min + min;
        temp.sec = t.sec + sec;
        return temp;
    }
    bool is_greater(Time x)
    {
        if (x.hr > hr)
            return true;
        else if (x.min > min)
            return true;
        else if (x.sec > sec)
            return true;
        else
            return false;
    }
};

int main()
{
    Time t, t2, t3;
    t.setTime(5, 6, 7);
    t2.setTime(4, 53, 6);
    t.showTime();
    t3 = t.add(t2);
    t.showTime();
    t2.showTime();
    t3.showTime();
    if (t2.is_greater(t))
        cout << "T2 is greater ";
    else
        cout << "T2 is not greater";

    return 0;
}