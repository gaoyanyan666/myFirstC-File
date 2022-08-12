#include <iostream>
using namespace std;

int main()
{
    int input;
    int sum = 0;
    cout << "Please enter some integers and end by typing -1:" << endl;
    cin >> input;

    while (input != -1)
    {
        sum += input;
        cin >> input;
    }
    cout << "sum: " << sum << endl;
    return 0;
}