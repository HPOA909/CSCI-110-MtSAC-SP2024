#include <iostream>
#include <string>
using namespace std;

void insertionSort(string array[], int arraySize){
    int scan; 
    string unsortedValue;
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

int main(){
    const int SIZE =5;
    string array[SIZE];
    
    cout << "Enter five names to be sorted: " << endl;
    for (int i=0; i<SIZE; i++){
        cin >> array[i];
    }

    insertionSort (array, SIZE);

    cout << "The sorted names are: " << endl;
    for (int i=0;i<SIZE;i++){
        cout << array[i] << " ";
    }

    return 0;
}