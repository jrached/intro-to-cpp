/*Name: Juan Rached
  Date: 10/08/19
  Program 25, Chapter 4
  Description: Reads names from a file and displays them into a monitor.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void readfile();

main()
{

    ofstream outputfile;
    outputfile.open("Names.txt");

    outputfile << "Maria\nJuan\nPedro\nFulana\nMengana" << endl;

    outputfile.close();

    readfile();

    return 0;
}

void readfile(void)
{
    string names;

    ifstream inputfile;

    inputfile.open("Names.txt");

    while( inputfile >> names)
    {
        cout<< names <<endl;
    }

    inputfile.close();
}
