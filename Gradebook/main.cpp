//Name: Juan Rached
//Date: 10/28/19
//Program: Chapter 7, program 12 Gradebook of Pain ( I added the pain part but you get it).
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string names[5],
           grades[5];
    double sum,
           test[5][4],
           average[5];
    int i,
        j;

    for( i = 0; i < 5; i++)
    {
        cout << "\tEnter name of student " << i +1 << ": ";
        cin >> names[i] ;

        for(j = 0; j < 4; j++)
        {
                cout << "\tTest" << j + 1 << " grade: ";
                cin >> test[i][j];
                if(test[i][j] > 0 && test[i][j] < 100)
                {
                }
                else
                   cout << "ERROR: TEst scores must be greater than zero and less than 100!";
        }
        cout << endl;
    }
    cout << endl;

    cout << "\n      Name T1 T2 T3 T4 Mean\n";

    for( i = 0; i < 5; i++)
    {
        sum = 0;
        cout << setw(10);
        cout << names[i] << " ";

        for(j = 0; j < 4; j++)
            {
                cout << setw(2);
                cout << test[i][j] << " ";

                sum = sum + test[i][j];
            }
        average[i] = sum/4;

        cout << setw(2);
        cout << " " << average[i];
        cout << endl;

        if( average[i] < 60)
        {
            grades[i] = 'F';
        }
        else
        {
            if( average[i] < 70)
            {
                grades[i] = 'D';
            }
            else
            {
                if( average[i] < 80)
                {
                    grades[i] = 'C';
                }
                else
                {
                    if( average[i] < 90)
                    {
                        grades[i] = 'B';
                    }
                    else
                    {
                        if( average[i] < 100)
                        {
                            grades[i] = 'A';
                        }
                    }
                }
            }
        }
    }

    cout << "\n\n\t\t\tFinal Grades\n" << endl;

    for(i = 0; i < 5; i++)
    {
        cout << names[i] << ": " << grades[i] << endl;
    }


    return 0;
}
