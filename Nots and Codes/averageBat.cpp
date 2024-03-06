#include <iostream>
using namespace std;

int main(){
    int hits;
    int atBat;
    double battingAverage;

    cout << "Enter the player's number of hits" << endl;
    cin >> hits;

    cout << "Enter the player's number of times at bat" << endl;
    cin >> atBat;

    battingAverage = hits/atBat;

    cout << "The player's batting average is " << battingAverage << endl;
    

    return 0;
}