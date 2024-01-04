// 8. Define overload functions to calculte area of circle, area of rectangle and area of Triangle

#include <iostream>
using namespace std;
int Area(int a, int b)
{
    return a * b;
}
float Area(int r)
{
    return 2 * 3.14 * r * r;
}
double Area(double height, int base)
{
    return 0.5 * height * base;
}
int main()
{
    cout << "Area of Rectangular is : " << Area(5, 5) << endl;
    cout << "Area of Circle is : " << Area(7) << endl;
    cout << "Area of Triangle is : " << Area(2, 5) << endl;

    return 0;
}