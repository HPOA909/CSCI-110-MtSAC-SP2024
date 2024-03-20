#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int number;
    unsigned seed = time(0);
    srand(seed);

    for (int counter=0; counter<3; counter++){
        number = rand()%10 +2;
        cout << "A random number between 2-11 is " << number << endl;
    }

    return 0;
}