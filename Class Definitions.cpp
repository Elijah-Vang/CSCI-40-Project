// Elijah Vang & Zenyn Ethridge
																					//*****************************************************************************************************
#include<iostream>																	// This is used for input and output statements in the functions.
#include<iomanip>																	// This is so that we can manipulate the output of the functions.
#include<fstream>																	// This is for the use of inputting and outputting files.
#include "Final Project Header.h"													// This is so this file can access the header file for the functions used.
using namespace std;																// This is so that we do not need to use (::std) multuple times beyond this line of code.
																					//*****************************************************************************************************
//**************************************************
// This function is used to read txt files and 
// convert the information in the txt file into 
// an array of rows and columns.
//**************************************************

void Definitions::elementArray()
{																					//*****************************************************************************************************
	ifstream file;																	// This line is to declare the file type.

	file.open("elements.txt", ios::in);												// Open the txt file "elements.txt" and if there not one then it will create one with that name.
	
	if (file.is_open())																// Checking to see if the file is open then proceeds to the next line if it is open.
	{
		for (int count = 0; count < totalElements; count++)							// For loop counter for the number of iterations needed to read the txt file.
		{
			file >> elementNum >> elementAbbrev >> elementName >> elementMass;		// This line will read in all of the data individually from the txt file in columns.
																					
			elementNumData[count] = elementNum;										// Assigns and saves the value from the txt file elementNum into the array elementNumData[].
			elementAbbrevData[count] = elementAbbrev;								// Assigns and saves the value from the txt file elementAbbrev into the array elementAbbrevData[].
			elementNameData[count] = elementName;									// Assigns and saves the value from the txt file elementName into the array elementNameData[].
			elementMassData[count] = elementMass;									// Assigns and saves the value from the txt file elementMass into the array elementMassData[].
			
			//if (count < totalElements)												// This statement is used as a conditional statement if it reaches the end of the file.
			//{
			cout << elementNumData[count] << " ";								// Display the column array of elementNumData[].
			cout << elementAbbrevData[count] << " ";							// Display the column array of elementAbbrevData[].
			cout << elementNameData[count] << " ";								// Display the column array of elementNameData[].
			cout << elementMassData[count] << " ";								// Display the column array of elementMassData[].
			cout << endl;														// Spacing purposes for a new line after each row of the arrays.
			//}
		}
	}
	file.close();																	// Closes the txt file.
}																					//******************************************************************************************************