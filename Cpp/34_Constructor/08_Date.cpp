// 8. Define a class Date with d, m , y as instance variables. initialise members using
// initialisers.
#include <iostream>
using namespace std;
class Date
{
private:
        int d, m, y;

public:
        Date(int date, int month, int year) : d(date), m(month), y(year) {};
        void display()
        {
                cout << "date => " << d << "/" << m << "/" << y << endl;
        }
};

// int main()
// {
//         Date a(2, 3, 2014);
//         a.display();

//         return 0;
// }
