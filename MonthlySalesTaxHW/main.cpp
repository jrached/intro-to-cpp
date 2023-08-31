/*Name: Juan Rached.
  Date: September 16, 2019.
  Program: Monthly Sales Tax (Page 144).
  Description: Asks user for month, year, and total income.
               Then displays a table with state tax, county tax,
               total income, total sales, and total taxes.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string month,
           year;
    float totalIncome,
          totalSales,
          totalTax,
          stateTax,
          countyTax;

    cout << "\n\tRached Industries Monthly Tax Report\n" << endl
         << "\n\t\tEnter Month of Report: ";
    cin  >> month;
    cout << "\n\t\tEnter Total Monthly Income: ";
    cin  >> totalIncome;

    totalSales = totalIncome/1.06;
    totalTax = totalSales*0.06;
    stateTax = totalSales*0.04;
    countyTax = totalSales*0.02;

    cout << "\n\tMonth: " << month << endl;
    cout << "\t--------------------" << endl;
    cout << "\n\tTotal Income:"     << setw(9)  << "$ "   << fixed << setprecision(2) << totalIncome;
    cout << "\n\tSales:"            << setw(16) << "$ "   << fixed << setprecision(2) << totalSales;
    cout << "\n\tCounty Sales Tax:" << setw(7)  << "$   " << fixed << setprecision(2) << countyTax;
    cout << "\n\tState Sales Tax:"  << setw(7)  << "$  "  << fixed << setprecision(2) << stateTax;
    cout << "\n\tTotal Sales Tax:"  << setw(7)  << "$  "  << fixed << setprecision(2) << totalTax << endl;
    return 0;
}
