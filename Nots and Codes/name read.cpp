#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream myFile;
    string name1, name2, name3;

    myFile.open("names.txt");

    getline(myFile,name1);
    getline(myFile,name2);
    getline(myFile,name3);

    cout << "The first name is " << name1 << endl;
    cout << "The second name is " << name2 << endl;
    cout << "The third name is " << name3 << endl;

    myFile.close();
    return 0;
}