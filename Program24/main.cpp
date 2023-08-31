/*Name:Juan Rached.
  Date: 10/07/19
  Program: Program 24 Chapter 5.
  Description: Program reads numbers from file Random.txt. Since I could not find file random.txt
               where the prompt directed, I created the file Random.txt with a set of random numbers and then
               made the program read it and perform the same exercises the prompt listed. For all intends and
               purposes it is the same program just that the actual numerical values in the output will be different.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ofstream outputfile;

   ifstream inputfile;
   int i, number, sum = 0;
   float average;

   outputfile.open("Random.txt");

   outputfile << "305\n45\n978\n789\n341\n12\n517\n7\n9\n100" << endl;

   outputfile.close();

   inputfile.open("Random.txt");

   i = 0;
   while( inputfile >> number)
   {
       i++;

       sum = sum + number;

   }

   average = float(sum)/i;

   cout << "\n\tThere are " << i << " numbers in this file." << endl;
   cout << "\n\tThe sum of those numbers is: " << sum << endl;
   cout << "\n\tThe average of the numbers is: " << average << endl;

   inputfile.close();


    return 0;
}
