#include <iostream>
using namespace std;

int main(){
    int number, square;
    const int max_value = 9999;

    cout << "Number" << "\t" << "Squares" << endl;
    cout << "------------------" << endl;

    for (int counter = 0; counter <= max_value; counter++){
        square = counter * counter;
        cout << counter << "\t" << square << endl;
    }

    return 0;
}