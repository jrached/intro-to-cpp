/*Name: Juan Rached
  Date: December 4th, 2019
  Program: Chapter 11, program 4 Weather Statistics
*/
#include <iostream>

using namespace std;

struct Weather
{
    float tempHighest;
    float tempLowest;
    float tempAverage;
    float rainTotal;
    float rainAverage;
};

void rainfall(Weather*);
void temperature(Weather*);

int main()
{
    Weather weathers[12] = {0};
    rainfall(weathers);
    temperature(weathers);
    return 0;
}

void rainfall(Weather w[12])
{

    float rainSum = 0;
    float rainAverage;

    cout << "\n\tEnter rainfall for each month\n" << endl;

    for(int i = 0; i < 12; i++)
    {
        cout << "\t\tMonth " << i + 1 << ": ";
        cin  >> w[i].rainTotal;

        rainSum = rainSum + w[i].rainTotal;
    }

    rainAverage = rainSum/12;

    cout << "\n\tTotal rainfall: " << rainSum << endl;
    cout << "\n\tAverage yearly rainfall: " << rainAverage << endl;

}

void temperature(Weather w[12])
{
    float lowest = 140;
    float highest = -100;
    int monthL;
    int monthH;
    float tempSum = 0;
    float tempYear;

    cout << "\n\tEnter the monthly highest and lowest temperatures( from -100 F to 140 F only)." << endl;

    for( int i = 0; i < 12; i++)
    {
        cout << "\n\t\tMonth " << i + 1;
        cout << "\n\t\tHighest: ";
        cin  >> w[i].tempHighest;
        cout << "\t\tLowest: ";
        cin  >> w[i].tempLowest;

        if( w[i].tempLowest < lowest)
        {
            lowest = w[i].tempLowest;
            monthL = i + 1;
        }

        if( w[i].tempHighest > highest)
        {
            highest = w[i].tempHighest;
            monthH = i + 1;
        }

        w[i].tempAverage = (w[i].tempHighest + w[i].tempLowest)/2;
        tempSum = tempSum + w[i].tempAverage;

    }

    tempYear = tempSum/12;

    cout << "\n\tThe year's highest temperature was " << highest << " in month " << monthH;
    cout << "\n\tThe year's lowest temperature was " << lowest << " in month " << monthL;

    for(int i = 0; i < 12; i++)
    {
        cout << "\n\tMonth " << i + 1 << " average temperature: " << w[i].tempAverage;
    }

    cout << "\n\tAverage yearly temperature: " << tempYear << endl;



}
