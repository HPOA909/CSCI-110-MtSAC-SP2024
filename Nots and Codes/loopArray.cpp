#include <iostream>
using namespace std;

int main(){
    const int SIZE = 3;
    int hours [SIZE];

    for (int index = 0;index<SIZE;index++){
        cout << "Enter the hours worked" << index+1 << endl;
        cin >> hours[index];
    }

    for (int index = 1; index<SIZE;index++){
        cout << "The hour " << index+1 << "is " << hours[index] << endl;
    }

    return 0;
}