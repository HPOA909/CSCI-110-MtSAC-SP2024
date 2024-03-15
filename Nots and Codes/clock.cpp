#include <iostream>
using namespace std;

int main(){
    int hours, minutes, seconds;

    for (hours = 0; hours <= 23; hours++){
        for (minutes = 0; minutes <= 59; minutes++){
            for (seconds = 0; seconds <= 59; seconds++){
                cout << hours << ":" << minutes << ":" << seconds << endl;
            }
        }
    }

    return 0;
}