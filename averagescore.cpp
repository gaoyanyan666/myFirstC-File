#include <iostream>
using namespace std;

int main(){
    int grade, sum, numberOfStudent;
    double average;
    bool flag; 


    cout << "Please enter the grade separated by a space: "<<endl;
    cout << "End the sequence by typing -1: "<<endl;

    sum = 0;
    numberOfStudent = 0;

    flag = false;
    while ( !flag ){
        cin >> grade;
        if ( grade == -1){
            flag = true;
        }else{
            sum += grade;
            numberOfStudent++;
        }
    }
    average = (double)sum / (double)numberOfStudent;
    cout << "the average score is " << average << endl;



    return 0;
}