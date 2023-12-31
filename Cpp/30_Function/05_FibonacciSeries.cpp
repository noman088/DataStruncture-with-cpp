#include <iostream>
using namespace std;
void checkFib(int n)
{
    int a = 0, b = 1;
    while (n)
    {
        int c = a + b;
        if (c == n)
        {
            cout << "yes , this is a term in fibonacci series : " << endl;
            exit(1);
        }

        a = b;
        b = c;
        n--;
    }
    cout << "Not a term in fibonacci series " << endl;
}
int main()
{

    int n;
    cout << "enter a number to check " << endl;
    cin >> n;
    checkFib(n);
    return 0;
}