#include <iostream>
using namespace std;

int main(){
    int menuSelect;
    double inches, centimeters, feet, meters, miles, kilometers;

    cout << "0. Exit the program" << endl;
    cout << "1. Convert inches to centimeters" << endl;
    cout << "2. Convert feet to meters" << endl;
    cout << "3. Convert miles to kilometers" << endl;
    cout << endl;
    cout << "Enter your selection: ";
    cin >> menuSelect;

    while ((menuSelect < 0) || (menuSelect > 3)){
        cout << "Invalid selection" << endl;
        cout << "Enter your selection: ";
        cin >> menuSelect;
    }

    if (menuSelect == 1){
        cout << "Enter the number of inches: ";
        cin >> inches;
        centimeters = inches * 2.54;
        cout << "That is equal to" << centimeters << "centimeters" << endl;
        break;
    }
    else if (menuSelect == 2){
        cout << "Enter the number of feet: ";
        cin >> feet;
        meters = feet * 0.3048;
        cout << "That is equal to" << meters << "Meters" <<endl;
        break;
    }
    else if (menuSelect == 3){
        cout << "Enter the number of miles: ";
        cin >> miles;
        kilometers = miles * 1.609;
        cout << "That is equal to" << kilometers << "kilometers" << endl;
        break;
    }
    else if (menuSelect == 0){
        cout << "Exiting";
        exit();
    }

    return 0;
}