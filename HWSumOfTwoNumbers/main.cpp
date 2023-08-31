//Name: Juan Rached.
//Date: September 2nd, 2019.
//Program: Sum Of Two Numbers (Page 79, exercise 1).
//Description: Stores the integer value 50 in one variable and the integer value 100 in another.
//             Then it stores the sum of these two integers in a third variable.
//             The sum is then displayed to verify that the program added the two values correctly.

#include <iostream>

using namespace std;

int main()
{
    int variableA = 50,
        variableB = 100,
        total;

    total = variableA + variableB;

    cout << "\n\tSum: ";
    cout << total << endl;



    return 0;
}
