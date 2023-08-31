#include <iostream>

using namespace std;

int main()
{
    float monthRain,
          sum1=0,
          sum2=0,
          average1,
          average2;
    int   i,
          j,
          years;

    cout << "\n\t\t\tAverage Rainfall Calculator" << endl;
    cout << "\n\tPlease enter number of years: ";
    cin  >> years;
    cout << endl;

    if( years >= 1 )
    {
        for(i = 0; i < years; i++)
        {
            sum1 = 0;

            for(j = 0; j < 12; j++)
            {
                cout << "\n\tRainfall month " << j + 1 << ": ";
                cin  >> monthRain;

                if( monthRain >=0 )
                {
                    sum1 = sum1 + monthRain;
                }
                else
                {
                    cout << "\n\n\t\t\t\aERROR: Amount of rainfall cannot be negative."
                            "\n\t\t\t    Your average won't account for this value." << endl;
                }
            }

            average1 = sum1/12;
            sum2 = sum2 + average1;

            cout << "\n\n\t\tMonthly average rainfall: ";
            cout << average1;
            cout << endl;
        }

    average2 = sum2/years;
    cout << "\n\n\n\t\tThe yearly average, for a period of " << 12*years << " months is "
         << average2 << endl;

    }
    else
    {
        cout << "\n\n\t\t\t\aERROR: Amount of years must be more than 1 and must be a whole number." << endl;
    }
    return 0;
}
