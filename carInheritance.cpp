/*
Programmer : Santiago Marin Suarez
*Course : CPTR 212
*Description : Class car, 4th program (inheritance)
* Date : September 20, 2021
*Last update : September 28, 2021
*/


#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:

        // Constructor functions
        Car(string Make, string Model, float FuelCapacity, float DistanceTravelled);
            // Trade in car.

        Car(string Make, string Model, float FuelCapacity);
            // New car shipped from the manufacturer; assuming distance travelles is 0.

        Car(); // Defult constructor

        // Mutator functions
        void set(string Make, string Model, float FuelCapacity, float DistanceTravelled)

        // Search: If we have only one set fnction, we want to change only one parameter
        // can we use one set of function to change one parameter wile keeping other parameters same.

        // Accessor functions
        string getModel(); // get the model of the car.
        int getMake(); // get the year of the car.
        float getFuelCapacity(); // get the fuel capacity.
        float getDistanceTravelled(); // get distance travelled

        float fuelEconomy(float cFuelCapacity, float cDistanceTravelled);
        void input();
        void output();

    private:
        // member variables
        float distanceTravelled;
        float fuelCapacity;
        int makeOfTheCar;
        string carModel;

};

class Smart : public Car { // Smart car inheritance from base class car

    public:
        void navigation(float source, float destination, bool highways, bool tolls, bool ferries)

        // Constructors
        // Accessor 
        // Mutator

    private:
        float source;


};

void Smart::navigation(add parameters)

    // v = 40 (general city speed limit)
    // distance = destination - source
    // print 1) time 2) distance
    // time = v * s



       

        
        Car(float distance, float capacity);
        // Initialize the distance travelled to miles and
        // initialize the fuel capacity to galons.
        
        Car();
        // Initialize to 0 the distance travelled and
        // the fuel capacity.

        Car(int make);
        // Initialize the make of the car.

        Car(string model);
        // Initialize the model of the car.

        void set(float distance,float capacity);
        // The distance traveled has been set to miles.
        // The fuel capacity has ben set to galons.

         void set(string model);
        // The model of the car has been set.
        
        void set(int make);
        // The make of the car has been set to the year of release.

        float getComputation();
        // Return the fuel economy based on the
        // distance travelled and the fuel capacity.

        string getModel();
        // Returns the model of the car.

        int getMake();
        // Returns the year of the car.

        float fuelEconomyComputation();
        
        

        void output(ostream& outs);

    private:
        // member variables
        float distanceTravelled;
        float fuelCapacity;
        int makeOfTheCar;
        string carModel();

};

int main()
{

    Car car1(100.0, 1.5);

    cout << "Details of the car: \n";
    car1.output(cout);

    return 0;


}

Car::Car(float distance, float capacity)
{

    if ((distance < 0) || (capacity < 0))
    {
        cout << "Illegal values for distance traveled and fuel capacity. \n";
        exit(1);
    }

    distanceTravelled = distance;
    fuelCapacity = capacity;
    
}

Car::Car(int make)
{

    if ((make < 1886)|| (make > 2021))
    {
        cout << "Illegal values for year of the car. \n";
        exit(1);

    }

    makeOfTheCar = make;

}

Car::Car() : distanceTravelled(0), fuelCapacity(0)
{

}

float Car::fuelEconomyComputation()
{
    float computation = getComputation();
    return (computation);
}

float Car::getComputation()
{
    return (distanceTravelled /= fuelCapacity);
}

string Car::getModel()
{
    string carModel = ("Hyundai Accent");
    string model = carModel;
    return (model);
}

int Car::getMake()
{    
    int makeOfTheCar = 2020;
    int make = makeOfTheCar;
    return (make);
}

void Car::output(ostream& outs)
{
    outs << "Model of the car: " << getModel() << endl;
    outs << "Year of the car: " << getMake() << endl;
    outs << "The fuel economy computation is: " << getComputation() << " miles per galon " << endl;
    
}

void Car::set(float distance, float capacity)
{

    if ((distance < 0) || (capacity < 0))
    {
        cout << "Illegal values for distance traveled and fuel capacity. \n";
        exit(1);
    }

    distanceTravelled = distance;
    fuelCapacity = capacity;
    
}

void Car::set(int make)
{

    if ((make < 1886) || (make > 2021))
    {
        cout << "Illegal values for year of the car. \n";
        exit(1);

    }

    makeOfTheCar = make;

}

