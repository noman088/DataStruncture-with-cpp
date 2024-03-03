/*

1. Define a class Complex to represent a complex number . Declare instance member
variables to store real and imaginary part of a complex number. also define instance
number fucntions to set values of complex number and print values of complex number


*/

#include <iostream>
using namespace std;
class Complex
{
private:
        int real;
        int img;

public:
        void setData()
        {

                cout << "Enter real part : ";
                cin >> real;
                cout << "Enter Imaginary Part : ";
                cin >> img;
        }
        void showData()
        {
                cout << real << " + " << img << "i" << endl;
        }
};
int main()
{
        Complex c1;
        c1.setData();
        c1.showData();

        return 0;
}