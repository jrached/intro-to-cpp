/*Name: Juan Rached
  Date: 11/25/19
  Program: Chapter 10 program 18 Phone Number List
*/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    size_t strPtr = NULL;
    string arr[11] = { "Alejandra Cruz, 555-1223",
                    "Joe Looney, 555-0097",
                    "Geri Palmer, 555-8787",
                    "Li Chen, 555-1212",
                    "Holly Gaddis, 555-8878",
                    "Sam Wiggins, 555-0998",
                    "Bob Kain, 555-8712",
                    "Tim Haynes, 555-7676",
                    "Warren Gaddis, 555-9037",
                    "Jean James, 555-4939",
                    "Ron Palmer, 555-2783"};
    int index;
    string lookfor;

    cout << "\n\t\t\tJuan's Phone Number List" << endl;
    cout << "\n\tWelcome. Enter a name: ";

    cin  >> lookfor;

    for(index = 0; index < 11; index++)
    {
        strPtr =  arr[index].find(lookfor);
        if (strPtr != string::npos)
        {
            cout << "\n\t" << arr[index] << endl;
        }
    }

    return 0;
}
