#include <iostream>
using namespace std;

int main(){
    int inputNumber;
    cout<<"Please enter a pocket number between 0 to 36: "<<endl;
    cin>>inputNumber;

    if (inputNumber == 0){
        cout << "Pocket color is green."<<endl;
    }else if(inputNumber >= 1 && inputNumber <=10){
        if (inputNumber % 2 == 0){
            cout << "Pocket color is black."<<endl; 
        }else{
            cout << "Pocket color is red."<<endl;
        } 
        
    }else if (inputNumber >= 11 && inputNumber <= 18){
        if (inputNumber % 2 == 0){
            cout << "Pocket color is black."<<endl;
        }else{
            cout << "Pocket color is red."<<endl;
        }
        cout << "Pocket color is red."<<endl;
    }else if (inputNumber >= 19 && inputNumber <=28){
        if (inputNumber % 2 == 0){
            cout << "Pocket color is red."<<endl;
        }else{
            cout << "Pocket color is black."<<endl;
        }
    }else if (inputNumber >= 29 && inputNumber <= 36){
        if (inputNumber % 2 == 0){
            cout << "Pocket color is red."<<endl;
        }else{
            cout << "Pocket color is black."<<endl;
        }
    }else{
        cout<<"The number your entered is out of range."<<endl;
    }


    return 0;
}