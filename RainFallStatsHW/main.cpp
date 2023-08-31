/*Name: Juan Rached
  Date: October 23rd, 2019
  Program: Rainfall Statistics (program 2, chapter 7)
*/

#include <iostream>

using namespace std;

int main()
{
    double rain[12] = {0};
    int i;
    double sum,
           average,
           lowest,
           highest;

    highest = 0;
    sum = 0;

    for(i = 0; i < 12; i++)
    {
        cout << "\n\tEnter rainfall for month " << i + 1 << ": ";
        cin  >> rain[i];

        if( rain[i] >= 0 )
            sum = sum + rain[i];
        else
            cout << "\n\n\t\t\t\aERROR: Invalid value for rainfall." << endl;

        if(i == 0)
            lowest = rain[i];

        if(rain[i] > highest)
            highest = rain[i];

        if(rain[i] < lowest)
            lowest = rain[i];
    }

    cout << "\n\n\t\tLowest rainfall of the year: " << lowest << endl;
    cout << "\n\t\tHighest rainfall of the year: " << highest << endl;

    cout << "\n\t\tTotal rainfall for the year: " << sum << endl;

    average = sum/12;

    cout << "\n\t\tAverage rainfall for the year: " << average << endl;



    return 0;
}
