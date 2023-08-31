/*Name: Juan Rached
  Date: 10/09/2019
  Program: Markup (problem 1) chapter 6.
  Description: Calculates retail price of an item if price and markup percentage are given.
*/
#include <iostream>

using namespace std;

float calculateRetail(float, float);

int main()
{
    float price, retailPrice, markup;

    cout << "\n\t\t\tRetail Price Calculator" << endl;
    cout << "\n\tEnter the item's price: $";
    cin  >> price;
    cout << "\n\tEnter the item's markup percentage: ";
    cin  >> markup;

    if( price >= 0 && markup >= 0)
    {
        retailPrice = calculateRetail(price, markup);

        cout << "\n\t\tThe item's retail price is: $"
             << retailPrice << endl;
    }
    else
        cout << "\n\n\t\t\aERROR: All input values most be greater than or equal to zero." << endl;


    return 0;
}

float calculateRetail(float x, float y)
{
    float z;

    z = x*(y/100) + x;

    return z;
}
