// 10. Define a function to merge two sorted arrays of same size.
#include <iostream>
using namespace std;
void mergeArray(int *p, int *q, int *r)
{
        for (int i = 0; i < 10; i++)
        {
                if (i < 5)
                        r[i] = p[i];
                else
                        r[i] = q[i - 5];
        }
}
int main()
{
        int a[5] = {1, 2, 3, 4, 5};
        int b[5] = {5, 4, 3, 2, 1};
        int c[10];
        mergeArray(a, b, c);
        for (int i = 0; i < 10; i++)
                cout << c[i] << " ";

        return 0;
}