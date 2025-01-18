// 1. Define a class Complex with appropriate instance variables and member functions.Define following operator in the class :
//     1. +
//     2. -
//     3. *
//     4. ==
#include <iostream>
using namespace std;
class Complex
{
private:
        int real;
        int img;

public:
        Complex(int r, int i)
        {
                real = r;
                img = i;
        }
        Complex() {};
        Complex operator+(Complex t)
        {
                Complex temp;
                temp.real = t.real + real;
                temp.img = t.img + img;
                return temp;
        }
        Complex operator-(Complex t)
        {
                Complex temp;
                temp.real = real - t.real;
                temp.img = img - t.img;
                return temp;
        }
        Complex operator*(Complex t)
        {
                Complex temp;
                temp.real = real * t.real;
                temp.img = img * t.img;
                return temp;
        }
        bool operator==(Complex t)
        {

                if (real == t.real && img == t.img)
                        return true;
                return false;
        }
        void showData()
        {
                cout << "real - " << real << " Imaginary - " << img << endl;
        }
};
int main()
{
        Complex a(2, 4), b(2, 4), c3;

        c3 = a + b;
        c3.showData();
        cout << endl;
        c3 = a - b;
        c3.showData();
        cout << endl;
        c3 = a * b;
        c3.showData();
        cout << endl;
        if (a == b)
                cout << "both are same " << endl;
        else
                cout << "Both are different" << endl;
}
