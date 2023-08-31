//Name: Juan Rached.
//Date: 11/8/19
//Program: Algorithm workbench number 25
//Description: Stores the value 99 in the 7th element of the array using pointer notation.

#include <iostream>

using namespace std;

int main()
{
    int array[10];

    *(array + 7) = 99;

    cout << array[7] << endl;


    return 0;
}
