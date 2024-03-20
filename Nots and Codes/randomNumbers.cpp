#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int number;
    while(true){
        unsigned seed = time(0);
        // cout << seed << endl;
        srand(seed);
        number = rand();
        cout << number << endl;
        // cout << RAND_MAX << endl;
    }
/*         for (int counter =0;counter <5 ; counter++){
            number = rand()%100 + 1;
            cout << number << endl;
        } */
    
    return 0;
}