#include <iostream>
using namespace std;

bool isInvalid(int model){
    bool status;
    if (model != 100 && model != 200 && model != 300){
        status = true;
    }
     else{
        status = false;
    };
    return status;
}

int main(){
    int model;
    cout << "Enter a model number:" << endl;
    cin >> model;

    while (isInvalid(model)){

        cout << "Invalid model number! This model number can be 100, 200, or 300!" << endl;
        cout << "Enter a model number again:" << endl;
        cin >> model;
    }
    cout << "You have entered a validated model number!" << endl;

    return 0;
}