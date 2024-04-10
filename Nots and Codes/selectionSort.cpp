#include <iostream>
using namespace std;

void selectionSort(int array[], int arraySize){
    int startScan, minValue, minIndex, index;
    for (startScan=0;startScan<=arraySize-2;startScan++){
        minIndex = startScan;
        minValue=array[startScan];
        for (index=startScan+1;index<=arraySize-1;index++){
            if (array[index]<minValue){
                minValue = array[index];
                minIndex=index;
            }
        }
        swap(array[minIndex], array[startScan]);

        for(int i=0;i<arraySize;i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }
}

void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int array[]={1,3,7,5,2};
    const int SIZE = sizeof(array)/sizeof(array[0]);
    cout << "size of the array is " << SIZE << endl;

    selectionSort(array, SIZE);

    cout << "The sorted array is ";
    for (int i=0;i<SIZE;i++){
        cout << array[i] << " ";
    }

    return 0;
}