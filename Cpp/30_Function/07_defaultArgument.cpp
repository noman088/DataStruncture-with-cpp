// 7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>
using namespace std;
int add(int a, int b, int c = 0)
{
    return a + b + c;
}
int main()
{
    // int a, b, c;
    // cout << "enter numbers to add : ";
    // cin >> a >> b >> c;
    // cout << "add of first two number is : " << add(a, b) << "\nAnd all three is " << add(a, b, c) << endl;
    int a = 10, b = 20, c = 30;
    cout << "sum of a and b is : " << add(a, b) << endl;
    cout << "sum of all three is : " << add(a, b, c) << endl;
    return 0;
}