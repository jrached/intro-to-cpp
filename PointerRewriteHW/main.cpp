//Name: Juan Rached
//Date: 11/8/19
//Program: Chapter 9, Program 5, Pointer rewrite.
//Description: Rewrites a function that uses call by reference using
//             pointers instead and that uses that function in a small program.

#include <iostream>

using namespace std;

int doSomething(int *, int *);

int main()
{
    int x, y, z;
    int *ptr1 = &x;
    int *ptr2 = &y;


    cout << "\t\tThe Absurd Power Estimator (Where accuracy is not guaranteed!)";
    cout << "\n\n\tEnter the temperature of your phone: ";
    cin  >> x;
    cout << "\n\tEnter the temperature of your hand: ";
    cin  >> y;

    cout << "\n\n\tTotal power: " <<  doSomething(ptr1, ptr2) << endl;

    return 0;
}

int doSomething(int *x, int *y)
{
 //   int *ptr1 = &x;
  //  int *ptr2 = &y;

    int temp = *x;
    *x = *y*10;
    *y = temp*10;
    return *x + *y;
}
