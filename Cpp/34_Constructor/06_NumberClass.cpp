// 6. Define a class Number with size and arr pointer as instance variables. Provide
// constructor to  initialise instance members, dynamically allocate an array of given
// size and store address in arr variable of object. Also define destructor to deallocate
// memory of array . Implement deep copy using copy constructor to avoid memory issue.
#include <iostream>
using namespace std;
class Number
{
private:
        int size;
        int *arr;

public:
        Number(int s)
        {
                size = s;
                arr = new int[s];
                for (int i = 0; i < size; i++)
                {
                        arr[i] = i + 1;
                }
        }
        Number(Number &copy)
        {
                size = copy.size;
                arr = new int[size];
                for (int i = 0; i < size; i++)
                {
                        arr[i] = copy.arr[i];
                }
        }
        ~Number()
        {
                delete[] arr;
        }
        void display()
        {
                for (int i = 0; i < size; i++)
                {
                        cout << arr[i] << "";
                }
                cout << endl;
        }
};
int main()
{
        Number a(5);
        Number b = a;
        a.display();
        b.display();
}