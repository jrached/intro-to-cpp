#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> hello(5);
    vector<int> hola(5);

    for (int i = 0; i < 5; i++)
    {
        cout << "\n\tEnter hours of each employee: ";
        cin  >> hola[i];
        cout << "\n\tEnter salary of each employee: ";
        cin  >> hello[i];
    }

    return 0;
}
