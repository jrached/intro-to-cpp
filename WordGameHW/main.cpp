/*Name: Juan Rached
  Date: September 18, 2019
  Program: Word Game (page 147)
  Description: Program asks the user for his/her personal
               information to then make a short story with it.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name,
           age,
           city,
           college,
           profession,
           animal,
           petName;

    cout << "\n\t\t\tWord Game" << endl;
    cout << "\n\tProgram will make a story with the inputs you give it";
    cout << "\n\n\t\tName: ";
    cin  >> name;
    cout << "\t\tAge: ";
    cin  >> age;
    cout << "\t\tCity: ";
    cin  >> city;
    cout << "\t\tCollege: ";
    cin  >> college;
    cout << "\t\tProfession: ";
    cin  >> profession;
    cout << "\t\tAnimal: ";
    cin  >> animal;
    cout << "\t\tPet Name: ";
    cin  >> petName;

    cout << "\n\tThere once was a person named "       << name
         << " who lived in "                           << city
         << ". At the age of\n\t"                      << age
         << ", "                                       << name
         << " went to college at "                     << college
         << ". "                                       << name
         << " graduated and went to work\n\tas a(n) "  << profession
         << ". Then, "                                 << name
         << " adopted a(n) "                           << animal
         << " named "                                  << petName
         << ". They\n\tboth lived happily ever after!" << endl;


    return 0;
}
