#include <iostream>

using namespace std;

void getNum(int& );
void doubleNum(int& );
void test(int );


int main()
{

    int value;

    getNum(value);

    doubleNum(value);

    cout << value << endl;

    test(value);

    cout << value << endl;



    return 0;
}


void getNum(int& number )
{
    cin >> number;
}


void doubleNum(int& number2 )
{
    number2 *= 2;
}

void test(int number3)
{
    number3 *= 3;
}
