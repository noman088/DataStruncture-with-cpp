// 10.Write functions using function overloading to add two numbers having different data types.

#include <iostream>
using namespace std;
int add(int a, int b)
{

    return a + b;
}
double add(double a, double b)
{

    return a + b;
}
double add(int a, double b)
{

    return a + b;
}
double add(double a, int b)
{

    return a + b;
}
int main()
{
    cout << "Sum of Numbers is " << (1, 3) << endl;
    cout << "Sum of Numbers is " << (1.5, 5.3) << endl;
    cout << "Sum of Numbers is " << (1.6, 3) << endl;
    cout << "Sum of Numbers is " << (1, 3.6) << endl;

    return 0;
}