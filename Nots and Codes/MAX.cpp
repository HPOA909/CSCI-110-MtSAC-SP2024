#include <iostream>
using namespace std;

int findMax(int array[], int start, int end){
    int tmp;
    int largest = array[start];
    if(start >= end){
        return largest;
    }else{
        tmp = findMax(array, start+1, end);
        if (tmp > largest){
            largest = tmp;
        }
        return largest;
    }
}

int main(){
    const int SIZE = 9;
    int numbers[SIZE]={1, 3,5,7,9,2,4,6,8};
    int large;
    large = findMax(numbers, 0, SIZE-1);
    cout << "Largest number is " << large << endl;

    return 0;
}