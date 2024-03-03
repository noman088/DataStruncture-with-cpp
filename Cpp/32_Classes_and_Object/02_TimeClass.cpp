/*
        2. Define a class time to represent time (like 3 hr 45 min 20 sec) . Declare appropriate
        number of instance member varables and also difine instance memebre fucntions to
        set values for time and display values of time

*/

#include <iostream>
using namespace std;
class Time
{
private:
        int h, m, s;

public:
        void setData()
        {
                cout << "Enter Hour : ";
                cin >> h;
                cout << "Enter Minute : ";
                cin >> m;
                cout << "Enter Second ";
                cin >> s;
        }
        void showData()
        {
                cout << h << "hr " << m << "min " << s << "sec " << endl;
        }
};
int main()
{
        Time t1;
        t1.setData();
        t1.showData();

        return 0;
}