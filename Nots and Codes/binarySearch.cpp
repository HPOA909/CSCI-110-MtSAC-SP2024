#include <iostream>
using namespace std;

int binarySearch(int array[], int value, int arraySize);

int main(){
    int position = -1;
    int searchValue;
    const int SIZE = 10;
    int array[SIZE];

    cout << "The array is " << endl;
    for (int i=0; i<SIZE;i++){
        array[i] = 2*i;
        count = array[i] << " ";
    }
    count << endl;

    cout << "Enter a search value:" << endl;
    cin >> searchValue;

    position = binarySearch(array, searchValue, SIZE);

    if (position == -1){
        cout << "The search value is not found!" << endl;
    }else{
        count << "The search value was found in position " << position << end;
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
            position = medium;
        }else if (array[medium] > value){
            omega = medium -1;
        }else{
            alpha = medium +1;
        }
    }
}