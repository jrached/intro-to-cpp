/*Name: Juan Rached
  Date: September 10, 2019.
  Program: Average Rainfall (page 142, exercise 4).
  Description: Calculates and displays the average rainfall
               for any three months for the user.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstMonth,
           secondMonth,
           thirdMonth;
    float  firstMonthRain,
           secondMonthRain,
           thirdMonthRain,
           average;

    cout << "\n\t\t\t\t\tAverage Rainfall Calculator" << endl;
    cout << "\n\tPlease enter the rainfall for any three months" << endl;
    cout << "\n\t\tFirst Month Name: ";
    cin  >> firstMonth;
    cout << "\n\t\tRainfall: ";
    cin  >> firstMonthRain;
    cout << "\n\t\tSecond Month Name: ";
    cin  >> secondMonth;
    cout << "\n\t\tRainfall: ";
    cin  >> secondMonthRain;
    cout << "\n\t\tThird Month Name: ";
    cin  >> thirdMonth;
    cout << "\n\t\tRainfall: ";
    cin  >> thirdMonthRain;

    average = (firstMonthRain + secondMonthRain + thirdMonthRain)/3;

    cout << "\n\tThe average rainfall for " << firstMonth << ", " << secondMonth
         << ", and " << thirdMonth << " is: " << average << endl;

    return 0;
}
