#include <iostream>
using namespace std;

void devider(float num1,float num2);

int main(){
    float num1;
    float num2;
    cout << "Enter your numerator: " << endl;
    cin >> num1;
    cout << "Enter your denominator: " << endl;
    cin >> num2;

    devider(num1,num2);

    return 0;
}

void devider(float num1,float num2){
    float result;
    result = num1 / num2;
    cout << "The result of those numbers that you have put in is " << result << endl;
}