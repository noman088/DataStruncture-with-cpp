// 5. Define a function to print all the prime factors of a given number.
// [for example. num=36 , prime factors are 2,3]

#include <iostream>
using namespace std;
int checkPrime(int n)
{
        for (int i = 2; i < n / 2; i++)
        {
                if (n % i == 0)
                {
                        return 0;
                }
        }
        return 1;
}
void PrintPrimes(int n)
{
        for (int i = 2; i < n; i++)
        {
                if (n % i == 0)
                {

                        if (checkPrime(i) == 1)
                                cout << " " << i;
                }
        }
}
int main()
{
        // int n;
        // cin >> n;
        int n = 36;
        PrintPrimes(n);

        return 0;
}