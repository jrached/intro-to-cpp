/*Name: Juan Rached
 Date: 10/16/19
 Prgram: Program 8 : coin toss
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void coinToss(int);

int main()
{
    int counter,
     seed,
     toss,
     coin = rand();

     cout << "\n How many tosses?" << endl;
     cin >> counter;

     coinToss(counter);
}

void coinToss(int counter)
{  int i,
       toss,
       coin;

       srand((unsigned)time(0));

   for(i = 0; i < counter; i++)
     {
          coin = rand();
          toss = coin%2;

         if( toss = 0 )
         {
             cout << "\nHeads." << endl;
         }
         else
            cout << "\nTails." << endl;

     }

}
