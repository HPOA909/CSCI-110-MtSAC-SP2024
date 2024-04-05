#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    const int ROWS = 4;
    const int COLS= 3;
    int values[ROWS][COLS];

    for (int row=0;row<ROWS;row++){
        for (int col=0;col<COLS;col++){
            values[row][col] = rand() % 30;
        }
    }

    for (int row=0;row<ROWS;row++){
        for (int col=0;col<COLS;col++){
            cout << values[row][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}