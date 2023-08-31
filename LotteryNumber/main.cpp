/*Name: Juan Rached and Reinaldo Figueroa.
  Date: 11/25/19
  Program: Chapter 10, program 20 lottery number.
  Description: Returns the most recent, least recent, and the
               frequency of lotto numbers from the 2019 lottery draws.
*/
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void mostCommon(vector<int>);
void leastCommon(vector<int>);
void frequency(vector<int>);
void menu();

int main()
{
    int number;
    int choice;
    vector<int> fileNumbers;
    ifstream inputFile;

    inputFile.open("LottoNumb.txt");

    while(inputFile >> number)
    {
       fileNumbers.push_back(number);
    }

    menu();
    cin  >> choice;

    switch(choice)
    {
        case 1: frequency(fileNumbers);
        break;
        case 2: leastCommon(fileNumbers);
        break;
        case 3: mostCommon(fileNumbers);
        break;
    }

}

void menu()
{
    cout << "\n\t\t\t2019 Lottery Numbers Database\n"
         << "\n Enter one of the menu options below:\n"
         << "\n\t1--Display the number of times each lotto number was drawn in the past year."
         << "\n\t2--Display the 10 least common numbers in the past year."
         << "\n\t3--Display the 10 most common numbers in the past year."
         << "\n\n\t>>";
}

void mostCommon(vector<int> vector4)
{
    vector<int> numberFrequency(69, 0);
    vector<int> most(69, 0);

    int startScan, maxIndex, maxValue;

     for(int counter = 0; counter < 651; counter++)
    {
        numberFrequency[vector4[counter]] = numberFrequency[vector4[counter]] + 1;

    }

    for(startScan = 1; startScan < 69; startScan++)
    {
        maxIndex = startScan;
        maxValue  = numberFrequency[startScan];

        for(int index = startScan + 1; index < 69; index++)
        {
            if(numberFrequency[index] > maxValue)
            {
                maxValue = numberFrequency[index];
                maxIndex = index;
                most[startScan] = index;
            }
        }
        numberFrequency[maxIndex] = numberFrequency[startScan];
        numberFrequency[startScan] = maxValue;
    }

    cout << "\nTop 10 most frequent numbers: " << endl;
    for(int counter = 1; counter < 11; counter++)
    {
        cout << counter << ". " << most[counter] << endl;
    }
}

void leastCommon(vector<int> vector4)
{
    vector<int> numberFrequency(69, 0);
    vector<int> least(69, 0);


    int startScan, minIndex, minValue;

    for(int counter = 0; counter < 651; counter++)
    {
        numberFrequency[vector4[counter]] = numberFrequency[vector4[counter]] + 1;

    }

    for(startScan = 1; startScan < 69; startScan++)
    {
        minIndex = startScan;
        minValue = numberFrequency[startScan];

        for(int index = startScan + 1; index < 69; index++)
        {
            if(numberFrequency[index] < minValue)
            {
                minValue = numberFrequency[index];
                minIndex = index;
                least[startScan] = index;
            }
        }
        numberFrequency[minIndex] = numberFrequency[startScan];
        numberFrequency[startScan] = minValue;
    }

    cout << "\nTop 10 least frequent numbers: " << endl;
    for(int counter = 1; counter < 11; counter++)
    {
        cout << counter << ". " << least[counter] << endl;
    }
}


void frequency(vector<int> vector4)
{
    vector<int> numberFrequency(69, 0);

    for(int counter = 0; counter < 651; counter++)
    {
        numberFrequency[vector4[counter]] = numberFrequency[vector4[counter]] + 1;

    }

    cout << endl;

    for(int counter = 1; counter < 70; counter++)
    {
        cout << "Lotto number " << counter << ": " << numberFrequency[counter] << endl;
    }
}


