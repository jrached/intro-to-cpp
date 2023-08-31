//Name: Juan Rached
//Program: Algorithm Benchmark Number 24.
//Date: 11/8/19
//Description: Prints the contents of value into the monitor using pointer notation.

#include <iostream>

using namespace std;

int main()
{

    double value = 29.7;
    double *ptr = &value;

    cout << *ptr << endl;

    return 0;
}
