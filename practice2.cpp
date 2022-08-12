#include <iostream>
using namespace std;

const double ORI_PRICE = 99;
int main(){

    int packageNumber;
    double discount ;
    cout << "Please enter the number of packages you purchased: ";
    cin >> packageNumber;

    if (packageNumber>=10 && packageNumber<=19){
        discount = ORI_PRICE * 0.1;
        cout<<"your discount is "<<discount<<" $."<<endl;
    }else if (packageNumber>=20 && packageNumber<=49){
        discount = ORI_PRICE * 0.2;
        cout<<"your discount is "<<discount<<" $."<<endl;
    }else if (packageNumber>=50 && packageNumber<=99){
        discount = ORI_PRICE * 0.3;
        cout<<"your discount is "<<discount<<" $."<<endl;
    }else if (packageNumber>=100){
        discount = ORI_PRICE * 0.4;
        cout<<"your discount is "<<discount<<" $."<<endl;
    }else if (packageNumber < 10){
        cout<<"there is no discount for you."<<endl;

    }else{
        cout <<"the number your entered is out of range."<<endl;
    }
    
    return 0;
}