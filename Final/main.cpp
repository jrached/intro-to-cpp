#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  string userInput;
  char string1[10] = {0};
  int tamano;
  int test;

  cin >> test;

  cin.getline(string1, 10);

  for(int i = 0; i < 10; i++)
  {
      if ( !isalpha(string1[i]))
      {
      }
      else
      {
          cout << endl << "\t\t\aERROR: Social security number must be composed of numbers only!" << endl;
          userInput = 'empty';
          break;
      }
  }
    userInput = string1;

    tamano = userInput.size();

    userInput = string1;
    tamano = userInput.size();

        if(tamano != 9)
        {
            cout << endl << "\t\t\aERROR: social security number must be exactly 9 digits." << endl;
        }

    cout << endl << userInput << endl;
    cout << endl << tamano << endl;

    float departure;
    cin  >> departure;

    if( departure >= 0 && !cin.fail())
    {
        cout << endl << "\t\tWassuppppp!?" << endl;
    }
    else
    {
        cout << endl << "\t\t\aERROR: Time must be a number larger than zero." << endl;
    }


    return 0;
}
