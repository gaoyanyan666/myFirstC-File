#include <iostream>
using namespace std;

int main(){
    const double LITER_TO_GALLON_RATE = 3.78533;
    double gallons;
    double liters;

    cout << "Please enter the number of gallons: " << endl;
    cin >> gallons;

    liters = gallons * LITER_TO_GALLON_RATE;
    cout <<"You have "<< liters <<" liters. "<< endl;
    return 0;
}