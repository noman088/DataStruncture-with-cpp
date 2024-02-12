// 6. Define a function to calculate HCF of two numbers
#include <iostream>
using namespace std;
int main()
{
        int a, b,hcf;
        cout << "Enter Two Number" << endl;
        cin >> a >> b;
        for (int i = 1; i < a; i++)
        {
                if (a % i == 0 && b % i == 0)
                {
                        hcf = i;
                }
        }
        cout << "HCF is " << hcf;

        return 0;
}