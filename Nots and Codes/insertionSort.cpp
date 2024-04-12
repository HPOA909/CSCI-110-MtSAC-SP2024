#include <iostream>
#include <ctime>
using namespace std;

void insertionSort(int array[], int arraySize);

int main(){
    srand(time(0));
    const int SIZE = 10;
    int array[SIZE];

    cout << "The unsorted array is " << endl;
    for (int i=0; i<SIZE; i++){
        array[i] = rand() % 50;
        cout << array[i] << " ";
    }
    cout << endl;

    insertionSort(array, SIZE);

    cout << "The sorted array is " << endl;

    for (int i=0; i<SIZE; i++){
        cout << array [i] << " ";
    }

    return 0;
}

void insertionSort(int array[], int arraySize){
    int scan, unsortedValue;
    for (int index=0; index<arraySize; index++){
        unsortedValue = array[index];
        scan = index;
        while ((scan>0) && (array[scan-1]>unsortedValue)){
            array[scan] = array[scan-1];
            scan--;
        }
        array[scan] = unsortedValue;
    }
}