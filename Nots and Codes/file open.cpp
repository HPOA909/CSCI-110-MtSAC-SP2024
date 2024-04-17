#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myFile;
    myFile.open("names.txt",ios::app);

    myFile << "John" << endl;
    myFile << "Kate" << endl;
    myFile << "Kim" << endl;

    return 0;
}