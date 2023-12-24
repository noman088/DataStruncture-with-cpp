#include <iostream>
using namespace std;
void checkPrime(int n)
{
    int j = 2, flag = 0;
    for (int i = 2; i < n / 2; i++)
    {

        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "This is Prime : " << endl;
    else
        cout << "This is not Prime : ";
}
int main()
{

    int n;
    cin >> n;
    checkPrime(n);

    return 0;
}