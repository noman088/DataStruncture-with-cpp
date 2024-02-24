// 1. Define a function to sort an array of integers in ascending or descending order
// depending on bool type argument (true for ascending and false for descending)
// use default argument to implement it.
#include <iostream>
using namespace std;
void sortarr(int a[], bool x)
{
        if (x == true)
        {

                for (int i = 0; i < 5; i++)
                        for (int j = i + 1; j < 5; j++)
                                if (a[i] > a[j])
                                {
                                        int x = a[i];
                                        a[i] = a[j];
                                        a[j] = x;
                                }
                for (int i = 0; i < 5; i++)
                        cout << a[i] << " ";
        }
        cout << endl;
        if (x == false)
        {

                for (int i = 0; i < 5; i++)
                        for (int j = i + 1; j < 5; j++)
                                if (a[i] < a[j])
                                {
                                        int x = a[i];
                                        a[i] = a[j];
                                        a[j] = x;
                                }
                for (int i = 0; i < 5; i++)
                        cout << a[i] << " ";
        }
        cout << endl;
}
int main()
{
        int a[] = {1, 4, 2, 5, 3};
        sortarr(a, true);
        sortarr(a, false);

        return 0;
}