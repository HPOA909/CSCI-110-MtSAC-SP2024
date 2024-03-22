#include <iostream>
#include <string>
using namespace std;

int main(){
    bool capvalid=false;
    string example;
    cout << "Enter a word: " << endl;
    cin >> example;

    for (int i=0; i < example.size(); i++){
        if(example.at(i)>='A' && example.at(i)<='Z')
            capvalid = true;
    }
    if (capvalid)
        cout << "Your word has a capital letter!" << endl;
    else
        cout << "Your word has not have a capital letter!" << endl;

    return 0;
}