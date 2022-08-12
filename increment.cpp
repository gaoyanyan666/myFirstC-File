#include <iostream>

using namespace std;

int main()
{

    /*   int n = 1;
    while (count-- > 0)
         cout << count << " ";


    while (--count > 0)
        cout << count << " ";

    do
        cout << n << " ";
    while (n++ <= 3);

    do
        cout << n << " ";
    while (++n <= 3);

    for (int count = 1; count < 5; count++)
        cout << (2 * count) << " ";

    for (int n = 10; n > 0; n = n - 2)
    {
        cout << "Hello ";
        cout << n << endl;
    }
    for (double sample = 2; sample > 0; sample = sample - 0.5)
        cout << sample << " ";

    for (int i = 1; i <= 10; i++)
    {
        if (i < 5 && i != 2)
            cout << "X";
    }

    for (int i = 1; i <= 10; i = i + 3)
    {
        cout << "X";
    }

    for (long m = 100; m < 1000; m = m + 100)
    {
        cout << "X";
    }

    int n = 1024;
    int log = 0;
    for (int i = 1; i < n; i = i * 2)
        log++;
    cout << n << " " << log << endl;

    int n = 5;
    while (--n > 0)
    {
        if (n == 2)
            break;
        cout << n << " ";
    }
    cout << "End of Loop.";

    int i = 5;
    while (--i > 0)
    {
        if (i == 2)
            exit(0);
        cout << i << " ";
    }
    cout << "End of Loop.";
*/
    int n, m;
    for (n = 1; n <= 10; n++)
        for (m = 10; m >= 1; m--)
            cout << n << " times " << m
                 << " = " << n * m << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Hello " << endl;
    }

    /*
        int number_of_inputNumber = 0;
        int inputNumber;
        cout << "Please enter a list of even positive numbers(separated by space  ): " << endl;
        cout << " Place a negative integer at the end of your list." << endl;
        cin >> inputNumber;
        for (number_of_inputNumber = 0; number_of_inputNumber > 0; number_of_inputNumber++)
        {
            cout << inputNumber << endl;
        }
    */
    return 0;
}
