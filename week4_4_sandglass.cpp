/*   corresponding size(2*n)*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a positive number: ";
    cin >> n;

    for (int i = n; i >= 2; i--)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= 2 * i - 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++) //
        {
            cout << " ";
        }
        for (int star = 1; star <= 2 * i - 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    /*
        for (int i = 1; i <= n; i++) // this will loop out the rows
        {

            for (int k = n - i; k > 0; k--) // because the empty row is one less than the row, so k = n-i
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++) // print out the star
            {
                cout << "* ";
            }
            cout << endl;
        }
        */
    return 0;
}