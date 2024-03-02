// 9. Define a function to swap two arrays

#include <iostream>
using namespace std;
void swapArray(int *p, int *q, int size)
{
        for (int i = 0; i < size; i++)
        {
                int temp;
                temp = p[i];
                p[i] = q[i];
                q[i] = temp;
        }
}
int main()
{

        int a[] = {1, 2, 3, 4, 5};
        int b[] = {5, 4, 3, 2, 1};
        cout << "Array before swap" << endl;

        for (int i = 0; i < 5; i++)
        {
                cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < 5; i++)
        {
                cout << b[i] << " ";
        }

        swapArray(a, b, 5);
        cout << endl;

        cout << "Array After swap" << endl;

        for (int i = 0; i < 5; i++)
        {
                cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < 5; i++)
        {
                cout << b[i] << " ";
        }
        return 0;
}