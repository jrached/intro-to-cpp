/*Name: Juan Rached.
  Date: September 30th, 2019.
  Program: Algorithm Workbench (Problems 35-43, chapter 5).
  Description: Completed set of problems involving while loops,
               do-while loops, and for loops.
*/

#include <iostream>

using namespace std;

int main()
{

    //35
    float input,
          product;

    while( product < 100)
    {
       cout << "\n\t\tEnter a value to be multiplied by ten: ";
       cin  >> input;

        product = input*10;

        cout << "\n\t\tResult: " << product << endl;

    }


    //36
    float number1,
          number2,
          sum;
    int menu;

    do
    {
       cout << "\n\tEnter a value 1: ";
       cin  >> number1;
       cout << "\n\tEnter a value2: ";
       cin  >> number2;

       sum = number1 + number2;

       cout << "\n\t\tSum: " << sum;
       cout << "\n\n\tTry again? (for yes enter 1, for no enter 0) ";
       cin  >> menu;


    }while(menu != 0);

    cout << "\n\n\t\t\tProgram Terminated.\n\n";


    //37
    int i;

    for(i = 0; i <= 1000; i = i + 10)
    {
        cout << "\n\t" << i << endl;
    }
    return 0;


    //38
    float input,
          sum = 0;
    int   i;

    for(i = 0; i < 10; i++)
    {
        cout << "\n\t\tEnter value: ";
        cin  >> input;

        sum = sum + input;

        cout << "\n\t\tTotal: " << sum << endl;

    }


    //39
    int i, j;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 15; j++)
        {
            cout << "  #  ";
        }

        cout << "\n\n";
    }


    //40
    int x = 1;

    do
    {
        cout << "enter a number: ";
        cin  >> x;

    }while( x > 0);


    //41
    char sure;

    while( sure != 'Y' && sure != 'N')
    {
        cout << "Are you sure you want to quit?";
        cin  >> sure;
    }


    //42
    int count;

    for(count = 0; count < 50; count++)
    {
        cout << "count is " << count << endl;
    }


    //43
    int x = 50;

    while( x > 0 )
    {
        cout << x << "seconds to go.\n";
        x--;
    }
}
