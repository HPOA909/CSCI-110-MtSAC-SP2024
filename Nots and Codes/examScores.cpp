#include <iostream>
using namespace std;

int main(){
    const SIZE = 5;
    double scores[SIZE];
    const double AVERAGE = 5;
    double average;
    
    for (int inex=0;index<SIZE;index++){
        cout << "Enter your scores: " << index+1 << endl;
        cin >> scores[index];
    }
    cout << "Here is the average score of 5: " << endl;
    for (int index=0;index<SIZE;index++){
        average = (scores[index]++) / AVERAGE;
        cout << "Average score";
    }

    return 0;
}