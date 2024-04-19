#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int num, index=0;
    ifstream numberFile;
    const int SIZE =5;
    int array[SIZE];
    numberFile.open("values.txt");

    while ((numberFile >> num) && (index < SIZE)){
        array[index] = num;
        cout << "Element index " << index << " is " << array[index] << endl;
        index++;
    }
    numberFile.close();

    return 0;
}