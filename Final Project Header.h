// Elijah Vang & Zenyn Ethridge

#ifndef header
#define header

#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

class Definitions
{
private:
	// Element Variable's
	int totalElements = 112;
	int elementNum;
	double elementMass;
	string elementName, elementAbbrev;

	// Element Array's
	int elementNumData[112];
	double elementMassData[112];
	string elementNameData[112];
	string elementAbbrevData[112];
	
public:
	void elementArray();

};

#endif