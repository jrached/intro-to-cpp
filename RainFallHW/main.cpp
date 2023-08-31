#include <iostream>
#include <string>

using namespace std;
int main()
{
    string nameMonth;

​
​
​cout << "\n\t\t\tAverage Rainfall Calculator" << endl;

    cout << "\n\tPlease enter the number of years: ";
    cin  >> years;

    for(i = 0; i < years; i++)
    {
        for(j = 0; j < 12; j++)
        {


            sum = sum + monthRain;
        }

        average = sum/12;
         cout << "\n\n\t\tMonthly Average: ";
         cout << average;
    }

    return 0;​
}

