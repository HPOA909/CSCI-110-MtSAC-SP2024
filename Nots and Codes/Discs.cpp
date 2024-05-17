#include <iostream>
using namespace std;

void moveDiscs(int num, int from, int to, int temp){
    if (num > 0){
        moveDiscs(num-1, from, temp, to);
        cout << "move a disc from peg " << from << " to peg " << to << endl;
        moveDiscs (num-1, temp, to, from);
    }
    
}

int main(){
    const int NUM_DISCS = 3;
    const int FROM_PEG = 1;
    const int TO_PEG = 3;
    const int TEMP_PEG = 2;

    moveDiscs(NUM_DISCS, FROM_PEG, TO_PEG, TEMP_PEG);
    cout << "all the pegs are moved." << endl;

    return 0;
}