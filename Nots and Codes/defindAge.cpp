#include <iostream>
#include<String.h>
using namespace std;

void name(string &name);
void age(float &age);
void result();

int main(){
    name(name);
    age(age);
    result();

    return 0;
}

void name(string &name){
    cout << "Enter you name: " << endl;
    cin >> name;
}

void age(float &age){
    cout << "Enter you age: " << endl;
    cin >> age;
}

void result(string name,float age){
    cout << "Your name is " << name << "and you age is" << age << endl;
} 