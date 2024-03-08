#include <iostream>
using namespace std;

// Execute at a later time
void summoner(float num1, float num2);

// Begin code here
int main(){
    float num1;
    float num2;
    cout << "Enter a number: " << endl;
    cin >> num1;
    cout << "Enter a number: " << endl;
    cin >> num2;
    summoner(num1, num2);

    return 0;
}

// This module intentionally put in the end because of the shiz above
void summoner(float num1, float num2){
    float result;
    result = num1 + num2;
    cout << "The total is " << result << endl;

}