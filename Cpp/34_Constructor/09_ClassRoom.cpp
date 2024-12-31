// 9.Define a class Room for a hotel management project with room number , room type,
// is_AC  , price as instance variables. initialise instance variables using constructor.
#include <iostream>
using namespace std;
class Room
{
private:
        int roomNumber;
        bool is_AC;
        string roomType; // single or double
        double price;

public:
        Room(int rn, bool ac, string rt, double cost)
        {
                roomNumber = rn;
                is_AC = ac;
                roomType = rt;
                price = cost;
        }
        // we can also make show and set function for cheking the room's data;
};
// int main()
// {

//         return 0;
// }