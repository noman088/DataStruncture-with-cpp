// 4. Define a function to calculate LCM of three numbers.

#include <iostream>
using namespace std;
int lcm(int a, int b, int c)
{
        int max = a * b * c, flag = 0, lcm;
        for (int i = 2; i <= max; i++)
        {
                if (i % a == 0 && i % b == 0 && i % c == 0)
                {
                        flag = 1;
                        lcm = i;
                }
                if (flag == 1)
                        break;
        }
        return lcm;
}
int main()
{
        // int a = 12, b = 24, c = 36;
        int a, b, c;
        cout << "Enter three nubmers" << endl;
        cin >> a >> b >> c;
        cout << "the LCM  is " << lcm(a, b, c) << endl;

        return 0;
}