#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int guess, secretNumber;
    srand(time(NULL));

    secretNumber = rand() % 20 + 1;

    do
    {
        cout << "Please enter your guess number between 1 and 20: ";
        cin >> guess;

        if (guess < secretNumber)
        {

            cout << "higher" << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "lower" << endl;
        }
        else
        {
            cout << "Congratulations!" << endl;
            break;
        }
    } while (guess != secretNumber);
    return 0;
}