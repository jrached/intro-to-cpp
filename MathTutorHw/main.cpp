/*Name: Juan Rached
  Date: September 9, 2019
  Program: Math tutor (page 145)
  Description: Displays to random numbers to be added.
               Allows the student time to answer, then it
               displays the answer to the student.
*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i,
        random1,
        random2,
        MAX_VALUE = 300,
        MIN_VALUE = 1,
        sum;

    unsigned seed = time(0);
    srand(seed);
    random1 = (rand()% (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    random2 = (rand()% (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    cout << "\n\t\t\tMath Tutor Pro\n";
    cout << "\n\tQuestion:\n\t\t\t"<< setw(4) << random1 << "\n\t\t\t"
         << "+"                    << setw(3) << random2 << "\n\t\t\t"
                                              << "----"  << "\n";
    cout << "\n\tEnter 'A' for the answer.";
    cin  >> i;

    sum = random1 + random2;

    cout << "\n\tAnswer:\n\t\t\t"<< setw(4) << random1 << "\n\t\t\t"
         << "+"                << setw(3) << random2 << "\n\t\t\t"
                                          << "----"  << "\n\t\t\t"
                               << setw(4) << sum     << endl;

    return 0;
}
