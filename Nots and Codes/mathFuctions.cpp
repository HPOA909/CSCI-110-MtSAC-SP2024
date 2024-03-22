#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main(){
    cout << pow(2,5) << endl;
    cout << sqrt(32) << endl;
    cout << M_PI << endl;
    cout << sin(M_PI/6) << endl;
    cout << INT_MAX << endl;

    double result;
    int num1 = 5;
    int num2 = 2;
    result = num1/num2;

    cout << result << endl;
    cout << double(num1/num2) << endl;
    cout << double (num1)/num2 << endl;
    cout << static_cast<double>(num1)/num2 << endl;

    return 0;
}