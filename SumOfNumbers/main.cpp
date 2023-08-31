/*Name: Juan Rached.
  Date: September 30th, 2019.
  Program: Sum of all Numbers (programming challenge #1, chapter 5).
  Description: Takes the sum of all integers from 1 to the user entry.
*/

#include <iostream>

using namespace std;

int main()
{
    int i,
        sum = 0,
        input;


        cout << "\n\t\t\tSum of Numbers" << endl;
        cout << "\n\tEnter a positive integer number: ";
        cin  >> input;

      if( input > 0 )
    {
        for(i = 0; i <= input; i++)
        {
            sum = sum + i;
        }

        cout << "\n\t\tThe sum of all the integers from 1 to " << input
             << " is: " << sum << endl;
    }
    else
        cout << "\n\t\t\t\aERROR: The integer value must be higher than zero." << endl;

    return 0;
}
