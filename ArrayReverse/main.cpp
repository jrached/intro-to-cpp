/*Name: Juan Rached
  Date: 11/18/19
  Program: Chapter 9, Problem 10 Array Reverse
  Description: Fucntion takes an array as input, reverses it, returns the address
  of the new address, and displays the new array.
*/
#include <iostream>

using namespace std;

int *reverseArray(int *, int);

int main()
{

    int array2 = {0};
    int *ptr = &array2;
    int size = 10;
    int array1[size] = {4,2,1,5,9,6,7,0,10,17};

    ptr = reverseArray(array1, 10);

    for ( int counter = 0; counter < size; counter++)
    {
        cout << *(ptr + counter) << endl;
    }

    return 0;
}

int *reverseArray(int *array, int size)
{
    for ( int counter = 0; counter < size/2; counter++)
    {
        int value1 = array[counter];
        array[counter] = array[size - 1 - counter];

        array[size - 1 - counter] = value1;

    }

    return array;
}
