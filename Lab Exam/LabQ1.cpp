#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const int SIZE = 5;
    int array[SIZE] = {1,3,2,5,4};
    ofstream file;
    file.open("myArray.txt");

    for (int i=1; i <= SIZE; i++){
        file << array[i] << endl;
    };

    file.close();

    return 0;
}