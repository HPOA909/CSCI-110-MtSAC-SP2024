#include <iostream>
using namespace std;

int GCD(int x, int y){
    if ((x % y) == 0){
        return y;
    }else{
        return GCD(x, x % y);
    }
}

int main(){
    int num1, num2;

    cout << "Enter an integer:" << endl;
    cin >> num1;

    cout << "enter an integer:" << endl;
    cin >> num2;

    cout << "GCD of those values is: " << endl;
    cout << GCD (num1, num2);

    return 0;
}