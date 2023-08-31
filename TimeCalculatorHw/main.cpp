/* Name: Juan Rached
   Date: 09/22/2019
   Program: Time Calculator (exercise 7 chapter 4)
   Description: Uses a series of if statements to transform the user's
                input (in seconds) to seconds, minutes, hours, or days.
*/
#include <iostream>

using namespace std;

int main()
{
    float seconds,
          minutes,
          hours,
          days;

     cout << "\n\t\t\tTime Calculator" << endl;
     cout << "\n\tEnter Number of seconds: ";
     cin  >> seconds;

    if( seconds >= 86400)
    {
        days = seconds/86400;
        cout << "\n\t\tThat amount of seconds is equivalent to: "
             << days << " day(s)." << endl;
    }
    else
    {
        if( seconds >= 3600)
        {
            hours = seconds/3600;
            cout << "\n\t\tThat amount of seconds is equivalent to: "
                 << hours << " hour(s)." << endl;
        }
        else
        {
            if( seconds >= 60)
            {
                minutes = seconds/60;
                cout << "\n\t\tThat amount of seconds is equivalent to: "
                     << minutes << " minute(s)." << endl;
            }
            else
            {
                cout << "\n\t\tYou entered: "
                     << seconds << " second(s)." << endl;
            }
        }
    }

    return 0;
}
