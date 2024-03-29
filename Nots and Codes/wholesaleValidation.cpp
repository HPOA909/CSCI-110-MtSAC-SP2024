#include <iostream>
#include <string>
using namespace std;

void showRetail();

int main(){
    string doAnother;

    do{
        showRetail();

        cout << "Do you have another item (Enter y for yes)" << endl;
        cin >> doAnother;
    } while (doAnother =="y" || doAnother == "Y");

    return 0;
}

void showRetail(){
    double wholesale, retail;
    const double MARKUP=2.5;
    cout << "Enter an item's wholesale cost:" << endl;
    cin >> wholesale;

    while (wholesale < 0){
        cout << "The cost annot be negative. Please enter the correct value" << endl;
        cin >> wholesale;
    }
    retail = wholesale * MARKUP;
    cout << "The retail price is $" << retail << endl;
}