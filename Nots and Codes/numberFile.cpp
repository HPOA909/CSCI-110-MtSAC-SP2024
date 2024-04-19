#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const int SIZE = 5;
    int array[SIZE]={10,20,30,40,50};
    ofstream numberFile;
    numberFile.open("values.txt");

    for (int index=0;index<SIZE;index++){
        numberFile << array[index] << ' ';
    }
    numberFile.close();

    return 0;
}