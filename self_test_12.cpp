#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "please enter an integer number: "<< endl;
    cin >> n;
    if (n < 0){
        cout <<"n is a negative number" << endl;
    }else if(n>=0 && n<=100){
        cout <<"n is a positive number" << endl;
    }else if(n>100){
        cout <<"n is a number greater than 100" << endl;
    }
    return 0;
}