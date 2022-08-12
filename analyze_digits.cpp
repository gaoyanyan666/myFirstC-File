#include <iostream>
using namespace std;

int analyzeDigits(int num, int &outSum);

int main()
{
    int num, countDigit, sumDigits;
    cout << "Please enter a positive integer: " << endl;
    cin >> num;

    countDigit = analyzeDigits(num, sumDigits); // get count digits result from function;

    return 0;
}

int analyzeDigits(int num, int &outSum) // count digits and return sum result
{
    int count, sum;
    int currDigit;

    count = 0;
    sum = 0;
    while (num > 0)
    {
        currDigit = num % 10;
        count++;
        sum += currDigit;
        num = num / 10;
    }
    outSum = sum;
    return count;
}