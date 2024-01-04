// 9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include <iostream>
using namespace std;
double max(double a, double b)
{
    return a > b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{

    cout << "Max is : " << max(444, 34) << endl;
    cout << "Max is : " << max(45.3, 34.3) << endl;
    return 0;
}