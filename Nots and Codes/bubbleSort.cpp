#include <iostream>
using namespace std;

void bubbleSort(int array[], int arraySize){
    int maxElement, index;
    for (maxElement=arraySize-1; maxElement>=0;maxElement++){
        for (index=0;index<=maxElement-1;index++){
            if (array[index],array[index+1]){
                swap(array[index],array[index+1]);
                for(int i=0;i<arraySize;i++){
                    cout << array[i] << " ";
                }
                cout << endl;
            }
        }
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

    bubbleSort(array, SIZE);

    cout << "The sorted array is ";
    for (int i=0;i<SIZE;i++){
        cout << array[i] << " ";
    }

    return 0;
}