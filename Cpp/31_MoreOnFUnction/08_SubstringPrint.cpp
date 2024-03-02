/*

8. Define a function to print a substring from startIndex(inclusive) to
endIndex(exclusive). Define function in such a way that if second argument is not provided.
string will print till the last possible index.

*/

// Take a look at assignment answers

#include <iostream>
using namespace std;
void StringPrint(string s, int start, int end = 0)
{
        int size = s.length();
        if (end == 0)
        {
                for (int i = 0; i < start; i++)
                {
                        cout << s[i];
                }
        }
        else
        {
                for (int i = start; i < end && size; i++)
                {
                        cout << s[i];
                }
        }
}
int main()
{
        string str;
        int s, e;
        char c;

        cout << "Enter a string " << endl;
        cin >> str;
        cout << "Do you want to give second Index Press y for yes and n for no \n";
        cin >> c;
        if (c == 'y')
        {
                cout << "Enter Start and Ending index";
                cin >> s >> e;
                StringPrint(str, s);
        }
        else if (c == 'n')
        {
                cout << "give a start index";
                cin >> s;
                StringPrint(str, s);
        }
        else
        {
                cout << "Please give a Valid Index ";
        }

        return 0;
}