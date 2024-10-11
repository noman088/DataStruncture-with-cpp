// 4. Define a class Book with booked , title and price as instance member variables
// Define non parameterrised and parametaerised constructor in the class.
#include <string.h>
class Book
{
private:
        int bookid;
        char title[20];
        float price;

public:
        Book() {};
        Book(int bid, char t[], float p)
        {
                bookid = bid;
                strcpy(title, t);
                price = p;
        }
};
