#include <iostream>
using namespace std;
int power(int x, int y)
{
    int ans=1;
    while (y)
    {
        ans = ans * x;
        y = y - 1;
        /* code */
    }
    return ans;
}
int main()
{

    int x, y;
    cout << "Enter two values " << endl;
    cin >> x >> y;
    cout << x << " raised to " << y << " is " << power(x, y) << endl;
    return 0;
}