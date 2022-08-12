#include <iostream>
using namespace std;

bool isPrime(int num)
{
    int coutDiv = 0; // count the factors
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0) // check how many numbers can be num's factors.
            coutDiv++;
    }
    if (coutDiv == 2) // prime number only has 2 factors.
        return true;
    else
        return false;
}
