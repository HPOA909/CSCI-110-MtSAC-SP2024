#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRandom(){
    int number;
    number = rand()%100 +1;
    return number;
}

int sum(int num1, int num2){
    int result;
    result = num1 + num2;
    return result;
}


int main(){
    int num1, num2, total;

    num1=getRandom();
    num2=getRandom();

    total = sum(num1, num2);

    cout << "The first number is " << num1 << endl;
    cout << "The second number is " << num2 << endl;
    cout << "The sum of two random numbers is " << total << endl;

    return 0;
}