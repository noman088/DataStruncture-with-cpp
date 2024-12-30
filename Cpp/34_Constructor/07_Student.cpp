// 7.Define a class student and write a program to enter student details using
// constructor and define member fucntion to display all the details.
#include <string>
#include <iostream>
using namespace std;
class student
{
private:
        int rollNumber;
        string name;

public:
        student(int rn, string n)
        {
                rollNumber = rn;
                name = n;
        };
        void display()
        {
                cout << "Roll Number => " << rollNumber << " " << " Name - " << name << endl;
        }
};
int main()
{
        student s(1, "Noman");
        s.display();
}