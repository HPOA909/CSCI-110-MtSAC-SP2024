#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int number;
    ofstream numberFile;
    numberFile.open("number.dat");

    for (int index=0;index<=65535;index++){
        number = rand();
        numberFile << number << endl;
    }
    numberFile.close();

    ifstream numberFileRead;
    int num, total=0;
    numberFileRead.open("number.dat");

    while (numberFileRead >> num){
        cout << num << endl;
        total += num;
    }
    cout << "Total is " << total << endl;

    return 0;
}