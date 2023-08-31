//Name: Juan Rached.
//Program: Chapter 8, Number 6, String Sort.
//Date: 11/08//19.
//Description: Uses selection sort to organize names in alphabetical order.

#include <iostream>
#include <string>
 using namespace std;

void sSort(string array[], int size);
void showArray(string array[], int size);
int main()
{
     int i;
     const int NUM_NAMES = 20;
     string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                   "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                              "Taylor, Terri", "Johnson, Jill",
                                   "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                             "James, Jean", "Weaver, Jim", "Pore, Bob",
                             "Rutherford, Greg", "Javens, Renee",
                             "Harrison, Rose", "Setzer, Cathy",
                             "Pike, Gordon", "Holland, Beth" };

  // Insert your code to complete this program

  sSort(names, NUM_NAMES);
  showArray(names, NUM_NAMES);


    return 0;
}


void sSort(string array[], int size)
{
    int startScan, minIndex;
    string minValue;

    for(startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];

        for(int index = startScan + 1; index < size; index++)
        {
            if( array[index].at(0) < minValue.at(0))
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

void showArray(string array[], int size)
{
    for( int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}
