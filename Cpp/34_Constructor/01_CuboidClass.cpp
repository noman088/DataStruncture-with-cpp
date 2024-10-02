// 1. Define a class Cuboid with length, breadth and height as instance member
// variables . Define Constructor to initialise member variables.

class Cuboid
{
private:
        int length, breath, height;

public:
        Cuboid(int a, int b, int c)
        {

                length = a;
                breath = b;
                height = c;
        };
};
#include <iostream>
using namespace std;
int main()
{
        Cuboid a(1, 2, 3);

        return 0;
}