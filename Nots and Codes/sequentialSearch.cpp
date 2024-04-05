#include <iostream>
#include <ctime>
using namespace std;

int main(){
    const int SIZE=5;
    int scores[SIZE];
    bool found=false;
    int searchValue;

    for (int i=0; i<SIZE; i++){
        scores[i] = rand() % 30;
    }
    for (int i=0;i<SIZE;i++){
        cout << "Index " << i << ": " << scores[i] << endl;
    }

    cout << "Enter a value to search: " << endl;
    cin >> searchValue;

    for (int i=0; i<SIZE; i++){
        if (scores[i] == searchValue){
            found = true;
            break;
        }
    }

    if (found){
        cout << "The search value " << searchValue << " exist in the array!" << endl;
    }else{
        cout << "The search value " << searchValue << " does NOT exists in the array!" << endl; 
    }

    return 0;
}