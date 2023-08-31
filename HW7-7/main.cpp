//Name: Juan Rached.
//Date: 10/28/19.
//Program: Chapter 7, Program 7 Number Analysis Program.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double lowest,
          highest,
          total,
          average,
          number[6] = {0};
    int count;

    ofstream outputfile;
    outputfile.open("Arbitrary.txt");

    outputfile << "\n345\n567\n23\n987\n1\n12345" << endl;

    ifstream inputfile;
    inputfile.open("Arbitrary.txt");

    count = 1;

    inputfile >> number[0];
    lowest = number[0];
    highest = number[0];
    total = number[0];

    while ( inputfile >> number[count] )
    {
          if ( number[count] < lowest )
        {
            lowest = number[count];
        }

        if (number[count] > highest)
        {
            highest = number[count];
        }

        total = number[count] + total;

    count++;
    }

    average = total/(count);

    cout << "\n\tLowest value: " << lowest << endl;
    cout << "\tHighest value: " << highest << endl;
    cout << "\tTotal of values: " << total << endl;
    cout << "\tAverage of values: " << average << endl;

    return 0;
}
