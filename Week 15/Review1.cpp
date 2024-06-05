#include <iostream>
using namespace std;

int multiply(int x, int y){
    if((x==0)||(y==0)){
        return 0;
    }else{
        return x + multiply(x,y-1);
    }
}

int main(){
    int x,y;

    cout << "Enter a number: " << endl;
    cin >> x;

    cout << "Enter a number: " << endl;
    cin >> y;

    int result = multiply(x,y);
    cout << "The multiplication of both is: " << result << endl;

    return 0;
}