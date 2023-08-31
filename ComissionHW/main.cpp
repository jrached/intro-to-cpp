/* Name: Juan Rached.
   Date: September 9th, 2019.
   Program: Stock Commission (Page 82, assignment 17).
   Description: Calculates and displays onto the screen the price of 750
                shares of a stock (that cost $35.00 each), the broker's
                2% commission, and the total paid (commission + price of stock).
*/

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    int shares = 750;
    float pricePerShare = 35.00,
          total,
          priceStock,
          commission;

    priceStock = shares*pricePerShare;
    commission = priceStock*0.02;
    total = priceStock + commission;

    cout << "\n\   For 750 shares, $35.00 a share,\n"
         << "\n\tPrice of Stock: $" << priceStock
         << "\n\tBroker's Commission: $" << commission
         << "\n\tTotal: $"<< total << endl;

    return 0;
}


//bool data type is either 0 or 1. (false or true).
//New data types: bool, long double, char, auto.
