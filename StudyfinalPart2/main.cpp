#include <iostream>

using namespace std;

int main()
{
    int* ptr;
    int house;
    ptr = &house;


    cout << ptr << endl;
    cout << house << endl;
    cout << *ptr << endl;
    return 0;
}
