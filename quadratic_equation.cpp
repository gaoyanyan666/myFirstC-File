#include <iostream>
#include <cmath>
using namespace std;

const int NO_SOLUTION = 0;
const int ONE_SOLUTION = 1;
const int TWO_REAL_SOLUTION = 2;
const int ALL_REALS = 3;
const int NO_REAL_SOLUTION = 4;

int quadratic(double a, double b, double c, double &outX1, double &outX2);
int linear(double a, double b, double &outX);

int main()
{
    double a, b, c, x1, x2;
    cout << "Please enter coefficients of quadratic equation:\n";
    cin >> a >> b >> c;

    cout << "The equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    switch (quadratic(a, b, c, x1, x2))
    {
    case TWO_REAL_SOLUTION:
        cout << "Solutions: " << x1 << " " << x2 << endl;
        break;
    case ONE_SOLUTION:
        cout << "Solutions: " << x1 << endl;
        break;
    case NO_REAL_SOLUTION:
        cout << "NO real solutions" << endl;
        break;
    case NO_SOLUTION:
        cout << "No solutions: " << endl;
        break;
    case ALL_REALS:
        cout << "All real numbers are solutions: " << endl;
        break;
    default:
        cout << "Error" << endl;
        break;
    }
    return 0;
}

int quadratic(double a, double b, double c, double &outX1, double &outX2)
{
    double delta;
    double x1, x2;
    if (a != 0.0)
    {
        delta = b * b + 4 * a * c;
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            outX1 = x1;
            outX2 = x2;
            return TWO_REAL_SOLUTION;
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            outX1 = x1;
            return ONE_SOLUTION;
        }
        else
            return NO_REAL_SOLUTION;
    }
    else
        return linear(a, b, x1);
}

int linear(double a, double b, double &outX) // ax +b = 0
{
    double x;

    if (a != 0.0)
    {
        x = -b / a;
        outX = x;
        return ONE_SOLUTION;
    }
    else if ((a == 0) && (b == 0))
    {
        x = 0;
        outX = x;
        return ALL_REALS;
    }
    else
        return NO_SOLUTION;
}