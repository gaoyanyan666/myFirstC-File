#include <iostream>
using namespace std;

int factorial(int num); // function declaration
int kCombination(int n, int k);

int main()
{
    int n = 4, k = 2, k_comb;
    k_comb = kCombination(n, k);

    cout << n << " choose " << k << " is " << k_comb << endl;
    return 0;
}

int kCombination(int n, int k)
{
    int nFact = 1, kFact = 1, n_kFact = 1, k_comb = 1;

    nFact = factorial(n);
    kFact = factorial(k);
    n_kFact = factorial(n - k);
    k_comb = nFact / (kFact * n_kFact);
    return k_comb;
}
int factorial(int num) // function factorial
{
    int factRes, i;
    factRes = 1;
    for (i = 1; i <= num; i++)
    {
        factRes *= i;
    }
    return factRes;
}