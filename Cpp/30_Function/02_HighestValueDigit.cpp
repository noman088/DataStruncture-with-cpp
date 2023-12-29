#include <iostream>
using namespace std;
int HighDigit(int n)
{
    int r, max = 0;
    while (n)
    {
        r = n % 10;
        if (max < r)
            max = r;
        n = n / 10;
    }
    return max;
}
int main()
{

    int n;
    cout << "Enter a Number " << endl;
    cin >> n;
    cout << HighDigit(n) << " is the highest Value digit   " << endl;
    return 0;
}