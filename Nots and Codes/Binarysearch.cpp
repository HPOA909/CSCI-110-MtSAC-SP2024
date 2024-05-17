#include <iostream>
using namespace std;

int binarySearch(int array[], int first, int last, int value){
    int middle;
    if(first > last){
        return -1;
    }
    middle = (first + last) / 2;
    if (array[middle] = value){
        return middle;
    }else if(array[middle] < value) {
        return binarySearch(array, middle+1, last, value);
    }else{
        return binarySearch(array, first, last, value);
    }
}

int main(){
    const int SIZE = 10;
    int array[SIZE] = {1, 22, 44, 22, 11, 44, 33, 55, 66, 77};
    int first =0;
    int last =0;
    int value =0;

    // cout << "Enter first value: " << endl;
    // cin >> first;

    // cout << "Enter last value: " << endl;
    // cin >> last;

    cout << "Enter the value: " << endl;
    cin >> value;

    cout << "the search result is: " << endl;
    cout << binarySearch(array, 0, SIZE-1, value) << endl;

    return 0;
}