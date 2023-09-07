#include "SlicesCalculator.h"
#include <iostream>
using namespace std;


void main() {



	SlicesCalculator calculator;

	double userPizzaDiameter;

	//ask the user for the diameter of their pizza 
	cout << "What is the Diameter of Your Pizza?(In inches): ";
	cin >> userPizzaDiameter;



	int totalSlices = calculator.calculateTotalSlices(userPizzaDiameter);

	cout << "The Total Number Of Avalible Slices On this Pizza are: " << totalSlices;


}