#include <iostream>

using namespace std;

   int doubleVal()
    {
        int number;

        cin >> number;

        return number;
  }


int main()
{
   int number;

   number = -doubleVal();

   cout << number << endl;

    return 0;
}
