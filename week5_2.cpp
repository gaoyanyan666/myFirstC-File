#include <iostream>
using namespace std;

int main()
{
    int curr;
    int sum = 0;
    int numberOfStudents;
    double average;

    // cout << "Please enter the number of students in class: ";
    // cin >> numberOfStudents;

    // cout << "Please enter the students's grades(separated by spaces): " << endl;
    /*
        for (int count = 1; count <= numberOfStudents; count++)
        {
            cin >> curr;
            sum += curr;
        }

    int count = 1;
    while (count <= numberOfStudents)
    {
        cin >> curr;
        sum += curr;
        count++;
    }
    average = (double)sum / (double)numberOfStudents;
    cout << average << endl;*/
    bool seenEndOfInput;

    cout << "Please enter the students's grades(end by -1 ): " << endl;
    seenEndOfInput = false;
    int numberOfStudent = 0;
    int count = 0;
    while (seenEndOfInput == false)
    {
        cin >> curr;
        if (curr == -1)
        {
            seenEndOfInput = true;
        }
        else
        {
            sum += curr;
            count++;
        }
    }
    average = (double)sum / (double)count;
    cout << sum << endl;
    cout << average << endl;
    return 0;
}