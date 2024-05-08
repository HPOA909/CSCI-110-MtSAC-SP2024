#include <iostream>
using namespace std;

void displayMenu(){
    cout << "This is the main Menu:" << endl;
    cout << "1. Sales and return process menu" << endl;
    cout << "2. Sales and return report menu" << endl;
    cout << "3. Exit the program" << endl;

    cout << "Enter your selection: " << endl;
    cin >> selection;

    while ((selection < 0) || (selection > 3)){
        cout << "Invalid selection" << endl;
        cin >> selection;
    }
}

void displaySalesMenu(){

}

void displayReportMenu(){

}

void processSale(){
    cout << "This is a sales prcess function" << endl;
}

void processReturn(){
    cout << "This is a return prcess function" << endl;
}

void reportSales(){
    cout << "This is a sales report function" << endl;
}

void reportReturn(){
    cout << "This is a return report function" << endl;
}

int main(){
    int menuSelection, 
}