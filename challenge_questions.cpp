/*Ask the user for a series of integers, one at a time. The user should enter a sentinel value of -99 to signal they are done with data entry.  The integers should be stored in a list as they are entered.  No other processing should be done at the time of data entry.  The data entry can be in the main program, if you'd like, or in a separate function.
Define a function that is passed the list of integers and gives back the count of odd numbers in the list.  The main program must call the function and use the result, displaying the count to the user.
Use a commenting style based on what you adopted from previous studies. */

#include <iostream>
#include <vector>
using namespace std;

int countOdds(vector<int> numList)
{
    int oddCount = 0;

    cout << "The number list is :" << endl;

    // loop over list of numbers and count odds
    for (int i = 0; i < numList.size(); i++)
    {
        // if number is not divisible by 2, it is odd
        if (numList[i] % 2 != 0)
        {
            oddCount++;
        }
        cout << numList[i] << endl;
    }

    return oddCount;
}

int main()
{
    int num = 0;
    vector<int> numList; // create a vector of integers to store the user input
    cout << "Please enter a sequences of integers, and end by typing -99: " << endl;

    // get first integer from user
    cin >> num;

    // loop until we get a "sentinal" (-99)
    while (num != -99)
    {
        // add number to list
        numList.push_back(num);

        // get next input number
        cin >> num;
    }

    int result = countOdds(numList);

    // print out odd number count
    cout << "Odd count: " << result << endl;

    return 0;
}