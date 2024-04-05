#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    const int SIZE = 10;
    int values[SIZE];
    int findIndex = -1;
    int searchValue;
    int index=0;

    for (int i=0; i<SIZE;i++){
        values[i] = rand()%30;
    }
    for (int i=0; i<SIZE;i++){
        cout << "Index " << i << ": " << values[i] << endl;
    }
    cout << "Enter a value to search:" << endl;
    cin >> searchValue;

    while (findIndex==-1 && index<SIZE){
        if (values[index]==searchValue){
            findIndex = index;
        }
        index++;
    }
    cout << "The search value was found at index " << findIndex;

    return 0;
}