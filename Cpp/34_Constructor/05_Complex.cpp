#include <iostream>
using namespace std;
// 5. Define a class Complex with instance variables for real and imaginary part of a
// complex number.Define only one parameterrised constructor in the class to initialise
// complex objects. Also define showData method in the class to display object data.
// Now create an array of Complex class with size 5 and display values of each object.

class complex
{
private:
        int real, img;

public:
        complex(int r, int i)
        {
                real = r;
                img = i;
        }
        void showdata()
        {
                cout << "real - " << real << " imaginary - " << img << endl;
        }
};
int main()
{
        complex *arr = new complex[3]{
            complex(1, 2),
            complex(2, 3),
            complex(3, 4)};

        for (int i = 0; i < 3; i++)
        {
                arr[i].showdata();
        }
}