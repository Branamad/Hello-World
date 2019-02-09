/*********************************************************************************************
 * *Author:        Dean Branaman
 * *Date:          9/24/2018
 * *Description:   This program calculates the total expense of a flower store from user input.
 * *******************************************************************************************/
#include <iostream>
using namespace std;

//This program accepts the cost of three items and adds them together. This total is then printed out.
int main()

{
	// double variable type used to handle typical user input of dollar and cents e.g 1.25 is one dollar and 25 cents
	double soil, fSeeds, fence, total;

	//Ask for and assign user input to the corresponding variables. Can copy-paste and change variable to add more items to program.
	//Does not currently filter out inappropriate inputs: strings, negative values, unreasonably  large numbers, too many significant figures. 
	cout << "What does the soil cost?\n";
	cin  >> soil;
	
	cout << "What do the flower seeds cost?\n";
	cin  >> fSeeds;

	cout << "What does the fence cost?\n";
	cin  >> fence;

	//If adding/subtracting items change them here as well
	total = soil + fSeeds + fence;

	//Output of program, needs to clearly show summed costs
	cout << "The total cost is " << total << "\n";

	return 0;
}
					
