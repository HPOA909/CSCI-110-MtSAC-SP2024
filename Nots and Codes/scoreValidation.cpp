#include <iostream>
using namespace std;

int main(){
    int score;
    cout << "Enter the score number" << endl;
    cin >> score;
    cout << "Enter the score again" << endl;
    
    while (score < 0 || score > 100){
        cout << "Enter the score number" << endl;
        cin >> score;
    }

    return 0 ;
}