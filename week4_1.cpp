#include <iostream>
using namespace std;

int main()
{
    int number = 1;
    while (number <= 99)
    {
        if (number % 2 != 0)
        {
            cout << number << endl;
        }
        else if (number == 13)
        {
            continue;
        }
        number++;
    }
    return 0;
}