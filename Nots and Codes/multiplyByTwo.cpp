#include <iostream>
using namespace std;

void multiply(double number){
    double result;
    result = number * 2;
    cout << "The number multiply by 2 is " << result << endl;

}

int main(){
    double num;
    cout << "Enter a number: " << endl;
    cin >> num;

    multiply(num);

    return 0;
}
