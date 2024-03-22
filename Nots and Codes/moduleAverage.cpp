#include <iostream>
using namespace std;

void sum(double&,double&,double&);
void computeAverage(double&,double&,double&,double&);
void outputAverage(double);

int main(){
    double num1, num2, num3, average;
    
    sum(num1, num2, num3);
    computeAverage(num1,num2,num3, average);
    outputAverage(average);

    return 0;
}

void sum(double& num1, double& num2, double& num3){
    cout << "Enter num1: " << endl;
    cin >> num1;
    cout << "Enter num2: " << endl;
    cin >> num2;
    cout << "Enter num3: " << endl;
    cin >> num3;
}

void computeAverage(double& num1, double& num2, double& num3, double& average){
    average = double(num1+num2+num3)/3;
}

void outputAverage(double average){
    cout << "The average is " << average << endl;
}