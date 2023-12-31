#include <iostream>
using namespace std;
int swap(int *p, int *q)
{
    int z = *p;
    *p = *q;
    *q = z;

    return 0;
}
int main()
{

    int a, b;
    cout << "Enter Two Numbers: " << endl;
    cin >> a >> b;
    cout << "Values before  swap is " << a << " and " << b << endl;
    swap(&a, &b);
    cout << "Values after swap is " << a << " and  " << b << endl;
    return 0;
}