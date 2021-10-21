/*
Programmer    : Santiago Marin, Seth Manche
*Course       : CPTR 212
*Description  : Interface class employee, inherit from person class.
* Date        : October 19, 2021
*Last update  : October 19, 2021
*/
#include "Person.cpp"
#include <iostream>
#include <string>
using namespace std;

class Employee : public Person 
{
    public:
        //Constructors
        Employee(int _ID, int _price);

        Employee(int _ID);

        Employee(); //Defult constructor

        //Accessor functions
        int getID();
        int getPrice();

        //Mutator functions
        void setID(int _ID);
        void setPrice(int _price);

        //Member functions
        //float InsuranceQuote();
        float LoanCalculator();
        //Get the price of the car and devid it by the number of months for the payment
        void input();
        void output();

    private:
        //Member variables
        int ID;
        int price;

};

int main()
{
    
};

// Constructors
Employee::Employee(int _ID, int _price)
{
    ID = _ID;
    price = _price;
}

Employee::Employee(int _ID)
{
    ID = _ID;
}

Employee::Employee() : ID(0), price(0) 
{

}

// Accessors
int Employee::getID()
{
    return ID;
}

int Employee::getPrice()
{
    return price;
}

// Mutators
void Employee::setID(int _ID)
{
    ID = _ID;
}

void Employee::setPrice(int _price)
{
    price = _price;
}

void Employee::input()
{
    cout << "Enter your ID: " << endl;
    cin >> ID;
}

void Employee::output()
{
    cout << "ID: " << ID;
}

float Employee::InsuranceQuote()
{

}

float Employee::LoanCalculator()
{
    
}