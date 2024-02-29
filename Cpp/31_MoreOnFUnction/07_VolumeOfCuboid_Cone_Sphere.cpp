// 7. Define overload functions to calculate volume of a cuboid, cone and sphere

#include <iostream>
using namespace std;
// cuboid
int Calculate(int l, int b, int h)
{

        return l * b * h;
}
// cone
double Calculate(float r, float h)
{
        double v = (3.14 * (r * r)) * (h / 3);
        return v;
}
// sphere
double Calculate(float r)
{
        return (4 / 3) * (3.14 * (r * r * r));
}

int main()
{
        int l, b, h;
        cout << "Enter length , base and height of cuboid" << endl;
        cin >> l >> b >> h;
        cout << "Volume of Cuboid is " << Calculate(l, b, h) << endl;

        float radius, height;
        cout << "Enter radius and height of Cone" << endl;
        cin >> radius >> height;
        cout << "Volume of Cone is " << Calculate(radius, height) << endl;

        float r;
        cout << "Enter radius of Sphere" << endl;
        cin >> r;
        cout << "Volume of Sphere is " << Calculate(r) << endl;
        return 0;
}