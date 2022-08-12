#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int input_number;
    string binString = "";

    cout << "Enter a positive number:" << endl;
    cin >> input_number;
    cout << "The binary representation of " << input_number << " is ";
    /*
        for (int exponent = log2(input_number); exponent >= 0; exponent--)
        {
            int power = pow(2, exponent);

            if (input_number >= power)
            {

                binString += '1';
                input_number -= power;
            }
            else
            {
                binString += '0';
            }
        }

        cout << stoi(binString) << endl;
    */

    while (input_number > 0)
    {
        binString = to_string(input_number % 2) + binString;
        input_number = input_number / 2;
    }
    cout << binString << endl;
    return 0;
}
