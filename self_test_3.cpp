#include <iostream>
using namespace std;

int main(){
    /*
    int x = 2;
    cout << "Start\n";
    if (x <= 3){
        if (x != 0)
            cout << "Hello from the second if.\n";
        else
            cout << "Hello from the else.\n";
    }
    cout << "End\n";
    cout << "Start again\n";
    if (x > 3){
        if (x != 0)
        cout << "Hello from the second if.\n";
        else
        cout << "Hello from the else.\n";
    }
    cout << "End again\n";
    */
    int extra = 0;
    if (extra < 0)
        cout << "small";
    else if (extra == 0)
        cout << "medium";
    else
        cout << "large";
    /*
    int x = 200;
    cout << "Start\n";
    if (x < 100)
        cout << "First Output.\n";
    else if (x > 100)
        cout << "Second Output.\n";
    else
        cout << "Third Output.\n";
    cout << "End\n";
    */
    int x = SOME_CONSTANT;
    cout << "Start\n";
    if (x < 100)
        cout << "First Output.\n";
    else if (x > 100)
        cout << "Second Output.\n";
    else
        cout << x << endl;
    cout << "End\n";
    return 0;
}