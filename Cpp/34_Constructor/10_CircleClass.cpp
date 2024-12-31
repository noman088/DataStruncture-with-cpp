// 10. Define Circle class with radius as instance variable. Define two constructors in the
// class-non parameterised and parameterised.
class Circle
{
private:
        int radius;

public:
        Circle() {};
        void setRadius(int r) { radius = r; }
        Circle(int r) { radius = r; }
        // we can make  area and other function for this class
};