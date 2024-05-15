#include <iostream>
#include <ctime>
using namespace std;

int getTotal(int array(), int arraySize){
    int total=0;
    for (int i=0;i<arraySize;i++){
        total += array[i];
    }
    return total;
}

int main(){
    srand(time(0));
    const int SIZE = 10;
    int values[SIZE];
    int sum=0;

    for (int i=0;i<SIZE;i++){
        values[i] = rand()%30;
    }
    for (int i=0; i<SIZE;i++){
        cout << "Index " << i << ": " << values[i] << endl;
    }
    sum =getTotal(values, SIZE);
    cout << "The total sum of the array elements is " << sum;
    return 0;
}