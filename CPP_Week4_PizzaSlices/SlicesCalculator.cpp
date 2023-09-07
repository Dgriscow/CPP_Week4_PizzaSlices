#include "SlicesCalculator.h"
#include <cmath>
using namespace std;

int SlicesCalculator::calculateTotalSlices(double pizzaDiameter)
{
    //calculate the radius 
    double pizzaRadius = pizzaDiameter / 2;

    //calculate the total area of the pizza
    
    double pizzaArea = pow(pizzaRadius, 2);

    pizzaArea = pizzaArea * pi;

    //use fmod to find the remainder of the pizzas from the pizza slice area value, assign it to a INT so to only get a whole number slice value


    double slicesTotal = pizzaArea / sliceSizeArea;


    int slicesFinalTotal = static_cast<int>(slicesTotal);


    return slicesFinalTotal;
}

