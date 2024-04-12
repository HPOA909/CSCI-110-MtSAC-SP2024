#include <iostream>
using namespace std;

int binarySearch(int array[], int value, int arraySize);

int main(){
    int coord = -1;
    int searchValue;
    const int SIZE = 10;
    int array[SIZE];

    cout << "The array is " << endl;
    for (int i=0; i<SIZE;i++){
        array[i] = 2*i;
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Enter a search value:" << endl;
    cin >> searchValue;

    coord = binarySearch(array, searchValue, SIZE);

    if (coord == -1){
        cout << "The search value is not found!" << endl;
    }else{
        cout << "The search value was found in position " << coord << endl;
    }

    return 0;
}

int binarySearch(int array[], int value, int arraySize){
    int alpha = 0;
    int omega = arraySize-1;
    int coord = -1;
    bool found = false;
    int medium;

    while ((!found) && (alpha <= omega)){
        medium = (alpha + omega) / 2;
        if (array[medium] == value){
            found = true;
            coord = medium;
        }else if (array[medium] > value){
            omega = medium -1;
        }else{
            alpha = medium +1;
        }
    }
}