// 2. Define a class Customer with instance members cust_id , name , email , mobile
// Define non parametaerised constructor and parameterised constructor in the class.
#include <string.h>
class Customer
{
private:
        int cust_id;
        char name[20];
        int mobile;

public:
        Customer(int i, char ar[], int m)
        {
                cust_id = i;
                strcpy(name, ar);
                mobile = m;
        }
        Customer() {};
};
