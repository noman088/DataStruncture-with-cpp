/*
5. Define a class Circle with radius as its property . Provide setRadius() and
getRadius() methods . Also define methods to return area and circumference of circle.

*/
#include <iostream>
using namespace std;
class Circle
{
private:
        int radius;

public:
        void setRadius()
        {
                cout << "Enter radius : ";
                cin >> radius;
        }
        int getRadius()
        {
                return radius;
        }
        double AreaOfCircle()
        {
                return 3.14 * (radius * radius);
        }
        double CircumferenceOfCircle()
        {
                return (2 * 3.14 * radius);
        }
};
int main()
{
        Circle c;
        c.setRadius();
        cout << "Radius of Circle is : " << c.getRadius() << endl;
        cout << "Area of Circle is : " << c.AreaOfCircle() << endl;
        cout << "Circumference of Circle is : " << c.CircumferenceOfCircle() << endl;
        return 0;
}