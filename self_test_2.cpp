#include <iostream>
using namespace std;

int main(){
    int number = 22;
    {
    int number = 42;
    cout << number << " ";
    }
    cout << number<<endl;

    {
    int x = 1;
    cout << x << endl;
    {
    cout << x << endl;
    int x = 2;
    cout << x << endl;
    {
    cout << x << endl;
    int x = 3;
    cout << x << endl;
    }
    cout << x << endl;
    }
    cout << x << endl;
    }
    return 0;
}