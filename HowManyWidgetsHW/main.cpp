/*Name: Juan Rached.
  Date: September 16, 2019.
  Program: How Many Widgets? (Page 143)
  Description: Calculates number of widgets set on a pallet
               by asking user for the weight of the pallet
               and the weight of the pallet with the widgets on top
               knowing that the weight of each widget is 12.5.
*/

#include <iostream>

using namespace std;

int main()
{
    float WEIGHTW = 12.5,
          weightPallet,
          weightTotal,
          numberWidgets;

    cout << "\n\t\t\tHow  Many Widgets?" << endl;
    cout << "\n\tEnter weight of pallet: ";
    cin  >> weightPallet;
    cout << "\n\tEnter weight of pallet with widgets: ";
    cin  >> weightTotal;

    numberWidgets = (weightTotal - weightPallet)/WEIGHTW;

    cout << "\n\t\tThe number of widgets on the pallet is: " << numberWidgets << endl;

    return 0;
}
