#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main(int argc, char** argv)
{   double area,
                length,
                width;

    char repeat;

    cout << "The Rectangle Area Program \n";
    cout << string(26, '-') << endl;

    while(tolower(repeat!='n')){

        bool checker = true; // the checker for the repeat input

        cout << "The length (in units)? \n";
        while(!(cin >> length)) {
            cout << "Incorrect input. Please try again.\n"; //to catch just letters. Found in the book c++ in a nutshell and stackoverflow
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "The width (in units)? \n";
        while(!(cin >> width)) {
            cout << "Incorrect input. Please try again.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        area = length * width;

        cout << "The area of the rectangle is " << area << endl;
        cout << "To repeat press 'y' \nOtherwise press 'n'" << endl;
        cin >> repeat;
    while (checker){ //evaluation for the repeat input
                if(isdigit(repeat)){
                    cout << "The input should be a LETTER either y or n.\nTry again.";
                    cin >> repeat;
                    }

                else if(tolower(repeat!='y' && repeat!='n')){
                    cout << "The input should be either y or n.\nTry again.";
                    cin >> repeat;}

                else{
                        checker = false;
                }
            }
            }
    cout << "Thank you for using the program. ";

return 0;
}



/*QUESTION 1

General Requirements
------------------------------
Calculate and display the area of a rectangle given the length and width of the rectangle.

General Approach
------------------------
Write a console application that will:
1. Prompt the user to enter the length of a rectangle.
2. Prompt the user to enter the width of a rectangle.
3. Calculate the area of the rectangle.
4. Display the calculated area.
5. Prompt the user to repeat the calculation.

Notes
--------
1. Assume the length and width of the rectangle are expressed in the same units.
2. Assume that length, width and area can be fractional units.
3. The formula for calculation of the area is area = length * width.

Submit your solution as lab1_annnnnnn.cpp where annnnnnn is your ACC student identification number..*/
