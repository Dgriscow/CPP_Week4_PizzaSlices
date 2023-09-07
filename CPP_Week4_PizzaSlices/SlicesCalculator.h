#pragma once


class SlicesCalculator {


private:

	//math constants 
	double pi = 3.14;



	//VARIABLE TO DETERMINE DEFAULT SLICE SIZE 
	//the value represents the area of 1 slice of pizza
	double sliceSizeArea = 14.125;


public:


	int calculateTotalSlices(double pizzaDiameter);




};