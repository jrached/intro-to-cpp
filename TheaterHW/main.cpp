#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;



void prices(void);
void seating(void);
void sales(char (*seats)[][30], int);
int theTerminator(void);
void availability(void);


int main()
{
    int i, j, loop;
    char arrange, seats[15][30];

    prices();
    seating();

    for (i = 0; i < 15; i++)
    {
        for(j = 0; j < 30; j++)
        {
             seats[i][j]  = '#';
        }
    }

    while(loop != 1)
    {
        arrange = seats[15][30];
        sales(&seats, 15);
        loop = theTerminator();
    }

    return 0;
}



void seating(void)
{
   int i,j;
   char seats[15][30];


    cout<< "\n\t\t     Seats\n\t";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 10; j++)
        {
                cout << j;
        }
    }
    cout << endl;


    for (i = 0; i < 15; i++)
    {
        for(j = 0; j < 30; j++)
        {
             seats[i][j]  = '#';
        }
    }

    for (i = 0; i < 15; i++)
    {
        cout << "Row" << i + 1 << "\t";
        for(j = 0; j < 30; j++)
        {
            cout << seats[i][j];
        }
        cout << endl;
    }

}

void sales(seats[][30], int 15)
{
    int i, j;

    cout << "\n\tEnter the row of the seat: ";
    cin  >> i;
    cout << "\n\tEnter the column of the seat: ";
    cin  >> j;

    cout << "\n\n\tIf the seat is available enter #, if it was sold enter *: ";
    cin  >> seats[i][j];

    cout<< "\n\t\t     Seats\n\t";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 10; j++)
        {
                cout << j;
        }
    }
    cout << endl;

    for (i = 0; i < 15; i++)
    {
        cout << "Row" << i + 1 << "\t";
        for(j = 0; j < 30; j++)
        {
            cout << seats[i][j];
        }
        cout << endl;
    }
}

int theTerminator(void)
{
    int terminate;
    cout << "\n\t\tEnd program?(yes = 1, no = 0)";
    cin  >> terminate;

    return terminate;
}


void prices(void)
{
    int i,
        j,
        counter,
        loop;
    float seats[15][30],
          prices[15][30];


        ofstream outputfile;
        outputfile.open("Pricing.txt");

        for(counter = 0; counter < 450; counter++)
        {
            outputfile << "12.50" << endl;
        }

        ifstream inputfile;
        inputfile.open("Pricing.txt");

        for(i = 0; i < 15; i++)
        {
            for(j = 0; j < 30; j++)
            {
                inputfile >> prices[i][j];
            }
        }
}

void availability(void)
{

}
