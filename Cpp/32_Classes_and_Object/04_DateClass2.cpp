/*
4. In Question 3. define methods to display date in the following pattern
    1. 31-12-2023
    2. 31-Dec-2023

*/

#include <iostream>
using namespace std;
class Date
{
private:
        int y, d, m;

public:
        void setData()
        {
                cout << "Enter Day :" << endl;
                cin >> d;
                cout << "Enter Month :" << endl;
                cin >> m;
                cout << "Enter year :" << endl;
                cin >> y;
        }
        void showData()
        {
                cout << d << "-" << m << "-" << y << endl;
        }
        void showData2()
        {
                switch (m)
                {
                case 1:
                        cout << d << "-" << "Jan" << "-" << y << endl;
                        break;
                case 2:
                        cout << d << "-" << "Feb" << "-" << y << endl;
                        break;
                case 3:
                        cout << d << "-" << "Mar" << "-" << y << endl;
                        break;
                case 4:
                        cout << d << "-" << "Apr" << "-" << y << endl;
                        break;
                case 5:
                        cout << d << "-" << "May" << "-" << y << endl;
                        break;
                case 6:
                        cout << d << "-" << "June" << "-" << y << endl;
                        break;
                case 7:
                        cout << d << "-" << "July" << "-" << y << endl;
                        break;
                case 8:
                        cout << d << "-" << "Aug" << "-" << y << endl;
                        break;
                case 9:
                        cout << d << "-" << "Sep" << "-" << y << endl;
                        break;
                case 10:
                        cout << d << "-" << "Oct" << "-" << y << endl;
                        break;
                case 11:
                        cout << d << "-" << "Nov" << "-" << y << endl;
                        break;
                case 12:
                        cout << d << "-" << "Dec" << "-" << y << endl;
                        break;

                default:
                        cout << "Please enter a valid month" << endl;
                        break;
                }
        }
};
int main()
{
        Date d;
        d.setData();
        d.showData();
        d.showData2();

        return 0;
}