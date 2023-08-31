/*Name: Reinaldo Figueroa and Juan Rached
  Date: 12/11/19
  Program: Chapter 6, Travel Expenses.
*/

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//All program functions
vector<int> duration(vector<int>);    //returns a vector so I can pass duration of trip, time of arrival and departure
float transport(vector<int>);         //from this function onto others.
float stay(vector<int>);
float meals(vector<int>);
void searchEmployee(void);
int menu(void);

int main()
{
    int loop = 0;   //for various loops in main.
    int days;       //to store days value from duration function.
    int arrival;    //to store arrival time from duration function.
    int departure;  //to store departure time from duration function.
    int choice;     //to store users choice once prompted with menu options
    float transportation;   //store price of transportation fees from transport function.
    float activities;       //stores activities and lodging fees from stay function.
    float food;             //stores meal fees from meals function.
    float totalExpenses;    //stores the sum of all the expenses during the trip.
    vector<int> trip(3, 0);

    //loop to keep the program running until user decides to terminate it.
    do
    {
        choice = menu(); //call for the menu function which returns the user's choice from menu options into variable choice

        cout << endl << endl; //aesthetic reasons

        switch(choice) //switch uses choice to determine the user's desired case
        {
            case 1:    //case 1 lets user enter an employee into the database

                do
                {
                    ofstream outputFile;     //File is open so that the sum of all expenses can be written into it.
                    outputFile.open("EmployeeTravels.txt", std::ios_base::app);

                    trip = duration(trip);     //call to duration function. The number of days, time
                                               //of arrival and time of departure are stored in the trip vector
                    transportation = transport(trip);   //call to transport function.
                    activities = stay(trip);            // call to stay function.
                    food = meals(trip);                 //call to meals function.

                    totalExpenses = food + transportation + activities;     //sums the expenses into totalExpenses variable.

                    outputFile << totalExpenses <<  endl;                   //prints total expenses into the file.

                    outputFile.close();                                     //file is closed.

                    cout << endl << endl << "\tEnter another employee? (1 for yes 0 for no): ";  //user is prompted whether to execute the case again or not.
                    cin  >> loop;

                    cout << endl << endl;

                }while(loop != 0);
                break;

            case 2:     //case 2 allows user to search employees in the database

                do
                {
                    searchEmployee();      //call to void searchEmployee function.

                    cout << endl << endl <<"\tSearch for another employee? (1 for yes 0 for no): "; //user prompted whether to execute case again or not.
                    cin  >> loop;

                    cout << endl << endl; //aesthetics.

                }while(loop != 0);
                break;
        }

        cout << endl << "\t\tGo back to main menu? (1 for yes 0 for no) ";  //user prompted whether to execute the whole program again or terminate it.
        cin  >> loop;

    }while(loop != 0);

    return 0;
}


//function definition duration function.
vector<int> duration(vector<int> trip)
{
    //do-while loops and if statements inside the function are for input validation.

    int loop;
    int days;
    int arrival;
    int departure;

    //outputfile
    ofstream outputFile;
    outputFile.open("EmployeeTravels.txt", std::ios_base::app);  //file is opened.

    cout << endl << "\t\tTravel Information" << endl;


    //employee general info
    string name;
    string social;
    int size1;

    cout << endl << "\tEnter employee name: ";  //no input validation for name as you can technically change your legal name to anything.
    cin  >> name;

     do
     {
        loop = 1;

        cout << endl << "\tEnter employee social security number: ";
        cin  >> social;

        for(int i = 0; i < 10; i++)   //algorithm makes sure the social security number does not contain
        {                             //none numeric characters.
            if (isalpha(social[i]))
            {
                loop = 0;
                break;
            }
        }

        size1 = social.size();

        if(size1 != 9 || loop != 1)   //algorithm makes sure social security number is exactly nine digits.
        {
            cout << endl << "\t\t\aERROR: Social security must be a NUMBER of exactly 9 digits." << endl;
            loop = 0;
        }
        else
        {
            outputFile << social << endl;
            outputFile << name << endl;
        }

     }while(loop != 1);


    //duration of entire trip
    do
    {
            loop = 1;

            cout << endl << "\tEnter how long the trip lasted (in days): ";
            cin  >> trip[0];
            days = trip[0];

            if(days > 0)
            {
                outputFile << days << endl;
            }
            else
            {
                cout << endl << "\t\t\aERROR: duration must be higher than zero." << endl;
                loop = 0;

            }

    }while(loop != 1);

    //time of departure on first day
    do
    {
        loop = 1;

        cout << endl << "\tEnter the time of departure from home (in 24 hour format): ";
        cin  >> trip[1];
        departure = trip[1];

        if(departure >= 0 && departure < 24)
            outputFile << departure << endl;
        else
        {
            cout << endl << "\t\t\aERROR: invalid time." << endl;
            loop = 0;

        }
    }while(loop !=1);


    //time of arrival home on last day.
    do
    {
        loop = 1;

        cout << endl << "\tEnter the time of arrival home (in 24 hour format): ";
        cin  >> trip[2];

        arrival = trip[2];

        if(arrival >= 0 && arrival < 24)
            outputFile << arrival << endl;
        else
        {
            cout << endl << "\t\t\aERROR: Invalid time." << endl;
            loop = 0;
        }

    }while(loop != 1);

    outputFile.close(); //file is closed.

    return trip;

}

//function definition for transport function.
float transport(vector<int> trip)
{
    //do-while loops and if statements inside the function are for input validation.

    int loop;
    float total;
    float airfare;
    float carRental;
    float miles;
    float priceMile;
    float parking;
    float parkingTotal;
    float taxi;
    float taxiTotal;


    //outputfile
    ofstream outputFile;
    outputFile.open("EmployeeTravels.txt", std::ios_base::app);  //file is opened.

    cout << endl << "\t\tGround and Air travel Expenses" << endl;

    //price of all air fare
    do
    {
        loop = 1;

        cout << endl << "\tEnter total price of airfare: $";
        cin  >> airfare;
        if(airfare >= 0)
        {
            outputFile << airfare << endl;
        }
        else
        {
            cout << endl << "\t\t\aERROR: price cannot be negative." << endl;
            loop = 0;
        }

    }while(loop != 1);

    //price of car rental
    do
    {
        loop = 1;

        cout << endl << "\tEnter total price of car rental: $";
        cin  >> carRental;
        if(carRental >= 0)
        {
            outputFile << carRental << endl;
        }
        else
        {
            cout << endl <<  "\t\t\aERROR: price cannot be negative." << endl;
            loop = 0;
        }

    }while(loop != 1);

    //miles driven
    do
    {
        loop = 1;

        cout << endl << "\tEnter miles driven on during trip: ";
        cin  >> miles;
        if(miles >= 0)
        {
            outputFile << miles << endl;
        }
        else
        {
            cout << endl << "\t\t\aERROR: mileage cannot be negative." << endl;
            loop = 0;
        }

    }while(loop != 1);

    //private vehicle expense ($0.27 per mile)
    priceMile = 0.27*miles;    //total spent driving is price per mile times mileage
    outputFile << priceMile << endl;

    //parking price. if less than or equal to $6 per day then no charge. else $(price - 6) per day charged to employee
    do
    {
        loop = 1;

        cout << endl << "\tEnter daily parking price: $";
        cin  >> parking;
        if( parking > 6)
        {
            parkingTotal = (parking - 6)*trip[0];
            outputFile << parkingTotal << endl;
        }
        else
        {
            if( parking >= 0)
            {
                parkingTotal = 0;
                outputFile << parkingTotal << endl;
            }
            else
            {
                cout << endl << "\t\t\aERROR: price cannot be negative." << endl;
                loop = 0;
            }
        }

    }while(loop != 1);

    //taxi fares. if less than or equal to $10 per day then no charge. else $(price - 10) per day charged to employee
    do
    {
        loop = 1;

        cout << endl << "\tEnter daily taxi fare: $";
        cin  >> taxi;
        if( taxi > 10)
        {
            taxiTotal = (taxi - 10)*trip[0];
            outputFile << taxiTotal << endl;
        }
        else
        {
            if( taxi >= 0)
            {
                taxiTotal = 0;
                outputFile << taxiTotal << endl;
            }
            else
            {
                cout << endl << "\t\t\aERROR: price cannot be negative." << endl;
                loop = 0;
            }
        }
    }while(loop != 1);

        //Total transportation expenses
        total = taxiTotal + parkingTotal + airfare + priceMile + carRental;

    outputFile.close();  //file is closed.

    return total;
}


//function definition for stay function
float stay(vector<int> trip)
{
    //do-while loops and if statements inside the function are for input validation.

    //outputfile
    ofstream outputFile;
    outputFile.open("EmployeeTravels.txt", std::ios_base::app);  //file is opened.

    float total;
    float lodgingTotal;
    float conference;
    float lodging;
    int loop;

    cout << endl << "\t\tStay and activity expenses" << endl;

    //conference or seminar registration fees
    do
    {
        loop = 1;

        cout << endl << "\tEnter price of conference fees: $";
        cin  >> conference;
        if(conference >= 0)
        {
            outputFile << conference << endl;
        }
        else
        {
            cout << endl << "\t\t\aERROR: fees cannot be negative." << endl;
            loop = 0;
        }
    }while(loop != 1);

    //hotel lodging. if less than or equal to $90 per night then no charge. else $(price - 90) per night charged to employee
    do
    {
        loop = 1;

        cout << endl << "\tEnter price of per night lodging: $";
        cin  >> lodging;
        if( lodging > 90)
        {
            lodgingTotal = (lodging - 90)*trip[0];
            outputFile << lodgingTotal << endl;
        }
        else
        {
            if( lodging >= 0)
            {
                lodgingTotal = 0;
                outputFile << lodgingTotal << endl;
            }
            else
            {
                cout << endl << "\t\t\aERROR: lodging fees cannot be negative." << endl;
                loop = 0;
            }
        }
    }while(loop != 1);

    total = lodgingTotal + conference;

    outputFile.close();  //file is closed.

    return total;
}

//function definition for meals function.
float meals(vector<int> trip)
{
    //do-while loops and if statements inside the function are for input validation.

    //outputfile
    ofstream outputFile;
    outputFile.open("EmployeeTravels.txt", std::ios_base::app);  //file is opened.

    int loop, departure;

    departure = trip[1]; //trip vector returned from duration function is used to obtain days spent on trio
                         //time of arrival and time of departure.

    float breakfast,
          lunch,
          dinner,
          tBreakfast,
          tLunch,
          tDinner,
          tMeal;

  cout << endl << "\t\tMeal expenses" << endl;

  //daily meal expenditure.

  //If breakfast everyday cost more than 9 dollars then employee is charged $(price of breakfast - 9). If it cost less than or equal to 9 then no charge.
  do
  {
      loop = 1;

    cout << endl << "\tEnter price of daily breakfast: $";
    cin  >> breakfast;

    if(breakfast > 9)
    {
        tBreakfast = trip[0]*(breakfast - 9);
    }
    else
    {
        if(breakfast >= 0)
        {
            tBreakfast = 0;
        }
        else
        {
            cout << endl << "\t\t\aERROR: price cannot be negative." << endl;
            loop = 0;
        }
    }

  }while(loop != 1);


  //if lunch cost more than 12 then employee is charged $(price of lunch - 12). if it cost less than or equal to 12 then no charge.
  do
  {
      loop = 1;

    cout << endl <<"\tEnter price of daily lunch: $";
    cin  >> lunch;

    if(lunch > 12)
    {
        tLunch = trip[0]*(lunch - 12);
    }
    else
    {
        if(lunch >= 0)
        {
            tLunch = 0;
        }
        else
        {
            cout << endl << "\t\t\aERROR: price cannot be negative." << endl;
            loop = 0;
        }
    }

  }while(loop != 1);

  //if dinner cost more than 16 then employee is charged $(price of dinner - 16). If it cost less than or equal to 16 then no charge.
  do
  {
    loop = 1;

    cout << endl << "\tEnter price of nightly dinner: $";
    cin  >> dinner;

    if(dinner > 16)
    {
        tDinner = trip[0]*(dinner - 16);
    }
    else
    {
        if(dinner >= 0)
        {
            tDinner = 0;
        }
        else
        {
            cout << endl <<"\t\t\aERROR: price cannot be negative." << endl;
            loop = 0;
        }
    }

  }while(loop != 1);

    //additional meals depending on time of departure from home.
    //if time < 7 then breakfast1 is charged. if time < 12 then lunch1 is charged if time < 18 then dinner1 is charged.
    if(departure < 7)
       {
            if(breakfast > 9)
                tBreakfast = tBreakfast + (breakfast - 9);
            else
                tBreakfast = 0;
       }
       else
       {
            if(departure < 12)
            {
                if(lunch > 12)
                    tLunch = tLunch + (lunch - 12);
                else
                    tLunch = 0;
            }
            else
            {
                if( departure > 18)
                {
                    if(dinner > 16)
                        tDinner = tDinner + (dinner - 16);
                    else
                        tDinner = 0;
                }
                else
                {
                    cout << endl;
                }
            }
       }

    //Additional meal depending on time of arrival home.
    //if arrival > 8 then breakfast2 is charged. if time > 13 then lunch2 is charged. if time > 19 then dinner2 is charged
    int arrival;
    arrival = trip[2];

    if( arrival > 8 )
    {
            if(breakfast > 9)
                tBreakfast = tBreakfast + (breakfast - 9);
            else
                tBreakfast = 0;

        if( arrival > 13 )
        {
                if(lunch > 12)
                    tLunch = tLunch + (lunch - 12);
                else
                    tLunch = 0;

            if( arrival > 19 )
            {
                    if(dinner > 16)
                        tDinner = tDinner + (dinner - 16);
                    else
                        tDinner = 0;
            }
        }
    }
    else
    {
        cout << endl;
    }

    //max expenditure of 9 dollars for breakfast, 12 for lunch, 16 for dinner

    outputFile << tBreakfast << endl;
    outputFile << tLunch << endl;
    outputFile << tDinner << endl;

    tMeal = tDinner + tBreakfast + tLunch; //calculate total spent on meals.

    return tMeal;
}


//function definition for searchEmployee function.
void searchEmployee(void)
{
    ifstream inputFile;
    inputFile.open("EmployeeTravels.txt", std::ios_base::app);  //file is open.

    string myString[16];
    string userInput;
    string line;
    int offset;
    int size2;
    int safe = 1;
    int check = 1;

    cout << endl << "\t\tSearch for employee" << endl;
    cout << endl << "\tEnter employee social security number: ";
    cin  >> userInput;

    size2 = userInput.size();

        for(int i = 0; i < 10; i++)  //algorithm to make sure social is composed of digits only.
        {
            if (isalpha(userInput[i]))
            {
                check = 0;
                break;
            }
        }

        if(size2 != 9 || check != 1)    //input validation for correct number of digits on social.
        {
            cout << endl << "\t\t\aERROR: Social security must be a NUMBER of exactly 9 digits." << endl;
        }
        else
        {
            while(!inputFile.eof())
            {
                getline(inputFile, line);                //search algorithm to find correct social in file.

                if ((offset = line.find(userInput, 0)) != string::npos)
                {
                    for(int i = 0; i < 16; i++)         //input the lines (from the file) after the social into  myString
                    {
                        inputFile >> myString[i];
                    }
                        cout << endl << "\t\tEmployee Social: " << userInput << endl;     //output to monitor.
                        cout << "\t\tEmployee Name: " << myString[0] << endl;
                        cout << "\t\tDuration of trip: " << myString[1] << " days." << endl;
                        cout << "\t\tLeft home at the: " << myString[2] << " hour." << endl;
                        cout << "\t\tArrived home at the: " << myString[3] << " hour." << endl;
                        cout << "\t\tAirfare: $" << myString[4] << endl;
                        cout << "\t\tCar rental: $" << myString[5] << endl;
                        cout << "\t\tMiles driven: " << myString[6] << endl;
                        cout << "\t\tSpent driving: $" << myString[7] << endl;
                        cout << "\t\tParking fees: $" << myString[8] << endl;
                        cout << "\t\tTaxi fares: $" << myString[9] << endl;
                        cout << "\t\tConference fees: $" << myString[10] << endl;
                        cout << "\t\tPer night lodging: $" << myString[11] << endl;
                        cout << "\t\tSpent on breakfast: $" << myString[12] << endl;
                        cout << "\t\tSpent on lunch: $" << myString[13] << endl;
                        cout << "\t\tSpent on dinner: $" << myString[14] << endl;
                        cout << "\t\tTotal expenses during trip: $" << myString[15] << endl;

                        safe = 0;   //had trouble with input validation for the algorithm. Used this variable to ensure it worked properly.
                }

            }

                if(safe != 0) //use of variable safe in input validation.
                {
                    cout << endl << "\t\t\aERROR: Social security number is not in this database." << endl;
                }
                else
                {
                    cout << endl;
                }
        }

     inputFile.close();   //file is closed.
}


//function definition for menu function.
int menu(void)
{
    int choice; //menu.

    cout << endl << endl << "\t\t\tEmployee Trip Database" << endl << endl <<
                            "\t\t To add an employee choose 1" << endl <<
                            "\t\t To search for an employee choose 2" << endl <<
                            "\t\t >>";
    cin  >> choice;

    return choice;
}
