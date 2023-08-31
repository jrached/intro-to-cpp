/* Team: Reinaldo Figueroa and Juan Rached.
   Date: November 20th, 2019.
   Program: Array Expander.
   Description: Program creates a function that accepts an array,
                which creates a second array of twice the size of the first,
                then stores all the values of the first array into the second
                and initializes the other half of the second array to zero.
                The function returns a pointer to the second array which is in turn
                printed onto the screen.
*/

#include <iostream>

using namespace std;

int *arrayExpander(int* array1, int );


int main()
{

    int size = 10;
    int array1[size] = {4, 5, 2, 9, 7, 3, 1, 2, 9, 7};
    int* ptr = NULL;

    ptr = arrayExpander( array1, size);

    for( int counter = 0; counter < 2*size; counter++)
    {
        cout << ptr[counter] << endl;
    }

    delete [] ptr;

    return 0;
}

int *arrayExpander(int* array1, int size)
{
    int* array2 = NULL;
         array2 = new int[2*size];

   for( int counter = 0; counter < 2*size; counter++)
    {
        array2[counter] = 0;
    }

       for( int counter = 0; counter < size; counter++)
    {
        array2[counter] = array1[counter];
    }


    return array2;
}
