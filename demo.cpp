#include <iostream>
using namespace std;


int main(){
    string username;
    int num1;
    int num2;
    int sum;
    cout << "Hello world!";
    cout << "\n";
    cout << "what is your name?";
    cin >> username;
    cout << "your name is " << username;

    cout << "please enter two numbers" << endl;
    cin >> num1 >>num2;
    sum = num1 + num2;
    cout << num1 <<" + " << num2 << " = " << sum << endl;


    return 0;
}