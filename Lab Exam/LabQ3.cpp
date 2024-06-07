#include <iostream>
using namespace std;

int allSum (int array[], int start, int end){
    int Total = 0;

    for (int i=start; i<=end; i++){
        Total = Total + array[i];
    };

    return Total;
}

int main(){
    int array[5] = {1,3,2,5,4};
    int total = 0;

    total = allSum(array,1,5);

    cout << "The total is " << total << endl;

    return 0;
}