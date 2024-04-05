#include <iostream>
#include <ctime>
using namespace std;

int main(){
    const int SIZE = 5;
    int values[SIZE] = {12,2,6,8,20};
    int index = 0;
    int highest = values[0];

    for (int i =0; i<SIZE; i++){
        if (values[i]>highest){
            highest = values[i];
        }
    }

    return 0;
}