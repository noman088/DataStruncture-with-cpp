// 1. Define a function to sort an array of integers in ascending or descending order
// depending on bool type argument (true for ascending and false for descending)
// use default argument to implement it.

#include <iostream>
using namespace std;

int maxi(int arr[], int max)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void sort(int ar[])
{
    int size = sizeof(ar) / sizeof(ar[0]);
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
        {
            int temp;
            if (ar[i] > ar[j])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
}
int main()
{
    int a[10] = {9, 8, 7, 1, 2, 3, 4, 6, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "size is " << size << endl;

    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
    sort(a);
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    return 0;
}
