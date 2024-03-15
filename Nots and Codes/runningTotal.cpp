#include <iostream>
using namespace std;

int main(){
    int counter, number;
    int total = 0;
    const int max_value = 5;

    cout << "The program calculates total of" << max_value << "numbers!" << endl;
    for (counter = 1; counter <= max_value; counter++){
        cout << "Enter a number:" << endl;
        cin >> number;
        total = total + number;
    }

    cout << "The total is " << total;

    return 0;
}