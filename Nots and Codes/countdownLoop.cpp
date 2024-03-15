#include <iostream>
using namespace std;

int main(){
    int counter = 10;
    const int min_value = 1;

    cout << "And the count down begins..." << endl;
    for (counter = 10; counter >= min_value; counter--){
        cout << counter << endl;
    }

    return 0;
}