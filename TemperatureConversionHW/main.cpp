/*Name: Juan Rached.
  Date: September 10, 2019.
  Program: Celsius To Fahrenheit (Page 144, exercise 12).
  Description: Takes Celsius temperature as an input from the user,
               transforms them into Fahrenheit units, and displays it
               onto the monitor.
*/
#include <iostream>

using namespace std;

int main()
{
    float celsius,
          fahrenheit;

    cout << "\n\t\t\tCelsius to Fahrenheit Machine" << endl;
    cout << "\n\tPlease enter temperature in Celsius units." << endl;
    cout << "\n\t\tTemperature (Celsius): ";
    cin  >> celsius;

    fahrenheit = 9*(celsius)/5 + 32;

    cout << "\n\tThe corresponding temperature (in Fahrenheits) for your input is: :"
         << fahrenheit << endl;


    return 0;
}
