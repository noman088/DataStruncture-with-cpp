
// 2. Create a class Time which contains hour, min and second as fields.
// overload greater than(>) operator to compare two time objects.
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
};

int main()
{
        Time t1(2, 45, 30), t2(2, 45, 31);
        cout << "Hello for check" << endl;
        if (t1 > t2)
        {
                cout << "t1 is Greater than t2" << endl;
        }
        else
                cout << "T1 is not greater than t2" << endl;

        return 0;
}