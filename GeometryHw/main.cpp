/*Name:Juan Rached
  Date: 9/24/19
  Program: Geometry Calculator (Chapter 4)
  Description: Calculates areas of circles, rectangles, and triangles
               using switch  and if statements.
*/
#include <iostream>

using namespace std;

int main()
{
    float areaCircle,
          areaRectangle,
          areaTriangle,
          base,
          height,
          radius,
          PI = 3.14159;
    int i;

    cout << "\n\t\t\tGeometry Calculator" << endl;

    i = 0;
    while(i != 4)
    {
        cout << "\n\n\tMenu:";
        cout << "\n\t1) Calculate the area of a circle."
                "\n\t2)Calculate the area of a rectangle."
                "\n\t3)Calculate the area of a triangle."
                "\n\t4) Quit." << endl;
        cout << "\t>>";
        cin  >> i;

        switch(i)
        {
            case 1: cout << "\n\tEnter radius of circle: ";
                    cin  >> radius;
                    areaCircle = PI*radius*radius;
                    if(radius > 0)
                        cout << "\n\t\tThe area is: " << areaCircle << endl;
                    else
                        cout << "\n\t\t\aERROR: Negative radii are not a real thing" << endl;
                    break;

            case 2: cout << "\n\tEnter base of rectangle: ";
                    cin  >> base;
                    cout << "\n\tEnter height of rectangle: ";
                    cin  >> height;
                    areaRectangle = base*height;
                    if(base > 0 && height > 0)
                        cout << "\n\t\tThe area is: " << areaRectangle << endl;
                    else
                        cout << "\n\t\t\aERROR: Negative lengths are not a real thing" << endl;
                    break;

            case 3: cout << "\n\tEnter base of triangle: ";
                    cin  >> base;
                    cout << "\n\tEnter height of triangle: ";
                    cin  >> height;
                    areaTriangle = (base*height)/2;
                    if(base > 0 && height > 0)
                        cout << "\n\t\tThe area is: " << areaTriangle << endl;
                    else
                        cout << "\n\t\t\aERROR: Negative lengths are not a real thing" << endl;
                    break;

            case 4: cout << "\n\t\t\tProgram Terminated." << endl;
                    break;

            default: cout << "\n\t\t\aERROR: Invalid value entered from menu." << endl;
        }
    }

    return 0;
}
