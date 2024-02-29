// 2. Define a function to sort an array of strings in ascending or descending order
// depending on bool type argument (true for ascending and false for descending)
// Use default argument to implement it.
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
        char *a[] = {"aaaa", "dddd", "bbbb", "eeeee", "cccc"};
        sort(begin(a), end(a));

        // for (int i = 0; i < 5; i++)
        // {
        //         for (int j = i + 1; j < 5; j++)
        //         {
        //                 if (a[i] > a[j])
        //                 {
        //                         char x[10];
        //                         strcpy(x, a[j]);
        //                         strcpy(a[j], a[i]);
        //                         strcpy(a[i], x);
        //                 }
        //         }
        // }
        for (int i = 0; i < 5; i++)
                cout << a[i] << " " << endl;
        return 0;
}