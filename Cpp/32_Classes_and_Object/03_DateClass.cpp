/*
        3. Define a class Date to represent date (like d=31 m=12 y=2023) . Declare
        appropriate number of instance member variables and also define instance memebre
        fucntions to set date and get date.



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
                cout << " d=" << d << " m=" << m << " y=" << y << endl;
        }
};
int main()
{
        Date d;
        d.setData();
        d.showData();

        return 0;
}