/*
1. Define a class Complex to represent a complex number with instance variables a and b
to store real and imaginary parts. Also define following member fucntions
    1. void setData(int, int )
    2. void showData()
    3. Complex add(Complex)
    4. Complex substact(Complex)
    5. Complex multiply(Complex)

*/

#include <iostream>
using namespace std;
class Complex
{
private:
        int real, imag;

public:
        void setData(int a, int b)
        {
                real = a;
                imag = b;
        }
        void showData()
        {
                cout << real << " + " << imag << "i" << endl;
        }
        Complex add(Complex x)
        {
                Complex temp;
                temp.real = real + x.real;
                temp.imag = imag + x.imag;
                return temp;
        }
        Complex substract(Complex x)
        {
                Complex temp;
                temp.real = real - x.real;
                temp.imag = imag - x.imag;
                return temp;
        }
        Complex multiplyy(Complex x)
        {
                Complex temp;
                temp.real = real * x.real;
                temp.imag = imag * x.imag;
                return temp;
        }
};
int main()
{
        Complex c1, c2, c3, c4, c5;
        c1.setData(2, 3);
        c2.setData(4, 5);
        c1.showData();
        c2.showData();

        c3 = c1.add(c2);
        c3.showData();

        c4 = c2.substract(c1);
        c4.showData();

        c5 = c1.multiplyy(c2);
        c5.showData();

        return 0;
}