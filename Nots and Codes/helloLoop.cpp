#include <iostream>
using namespace std;

int main(){
    int counter = 1;
    const int max_value = 5;

    cout << "This is the result for the while loop:" << endl;
    while (counter <= max_value){
        cout << "Hello world!" << endl;
        counter = counter + 1;
    }

    cout << "This is the result for Do-while loop:" << endl;
    counter = 1;
    do{
        cout << "Hello world!" << endl;
        counter++;
    }while(counter <= max_value);

    cout << "This is the result for For loop:" << endl;
    for (counter = 1; counter <= max_value; counter++){
        cout << "Hello world!" << endl;
    }

    return 0;
}