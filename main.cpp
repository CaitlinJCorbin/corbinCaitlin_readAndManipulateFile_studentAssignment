/* Program name: M04 Programming Assignment 1
*  Author: Caitlin J. Corbin
*  Date last updated: Feb. 10, 2020
* Purpose: Reads a file, finds the tip/tax/total, and outputs to user and a new file.
*/

#include <iostream> //standard heading
#include <fstream> //standard heading
#include <iomanip> //standard heading

using namespace std; //standard heading

int main() //main function
{
    ifstream theFile("meals.txt"); //reads data from file

double Meal_Price; //declares variables
double Tax;//declares variables
double Tip;//declares variables
double Total;//declares variables

        cout << fixed << showpoint << setprecision(2); //ensures decimal only reaches two places
        ofstream myFile; //creates new file
        myFile.open("meals2.txt"); //opens file
    while(theFile >> Meal_Price){ //loop that reads data and performs calculations
        cout << fixed << showpoint << setprecision(2); //ensures decimal only reaches two places

        cout << "Before Cost: " << Meal_Price << endl; //displays before cost
                    Tax = Meal_Price * 0.0675; //finds tax amount
                    Meal_Price = Meal_Price + Tax; //adds tax to meal price
                    Tip = Meal_Price * 0.20; //finds tip
                    Total = Meal_Price + Tip; //calculates total
        cout << "*Your tax is: $" << Tax << endl; //displays tax
        cout << "*The tip is: $" << Tip << endl; //displays tip
        cout << "Price with Tax & Tip: $" << Total << "\n\n"; //displays total cost

        myFile << "Tax: " << Tip << " Tip: " << Tax << " Total: " << Total << "\n"; //outputs to a separate file

    }

        return 0; //end
}
