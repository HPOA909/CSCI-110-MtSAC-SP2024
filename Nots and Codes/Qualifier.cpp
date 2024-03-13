#include <iostream>
using namespace std;

int main(){
    double salary, yearsOnJob;

    cout << "Enter salary: " << endl;
    cin >> salary;

    cout << "Enter years on job: " << endl;
    cin >> yearsOnJob;

    if (salary > 30000)
        if (yearsOnJob >= 2)
            cout << "You are qualify for the loan!" << endl;
        else{
            cout << "You must have been on your current ";
            cout << "job for at least two years to qualify!" << endl;}
    else{
        cout << "You must earn at least $30000 ";
        cout << "per year to qualify!" << endl;}
    
    return 0;
}