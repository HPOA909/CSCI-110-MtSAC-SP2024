#include <iostream>
using namespace std;

int main(){
    double test1, test2, test3, average;

    cout << "Enter score1:" << endl;
    cin >> test1;

    cout << "Enter score2:" << endl;
    cin >> test2;

    cout << "Enter score3:" << endl;
    cin >> test3;

    average = (test1 + test2 + test3)/3;

    cout << "The average score is:" << average << endl;

    if (average > 95){
        cout << "Congrats! You did great!" << endl;
    }
    return 0;
}