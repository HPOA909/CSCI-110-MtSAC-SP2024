#include <iostream>
using namespace std;

int main(){
    const int SIZE = 100;
    int values[SIZE];
    int count, number;

    cout << "Enter a number, or -1 to split!" << endl;
    cin >> number;

    while ((number!=-1)&&(count<SIZE)){
        values[count] = number;
        count++;
        cout << "Enter a number, or -1 to split!" << endl;
        cin >> number;
    }
    cout << "Here are the numbers you entered: " << endl;
    for (int index = 0; index < count; index++){
        cout << values[index] << endl;
    }

    return 0;
}