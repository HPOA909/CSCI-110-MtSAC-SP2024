#include <iostream>
using namespace std;

int main(){
    int month;

    cout << "Enter month as int: " << endl;
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "January!" << endl;
        break;
    case 2: 
        cout << "Feburary!" << endl;
        break;
    case 3: 
        cout << "March!" << endl;
        break;
    default:
        cout <<"Error! Invalid month!" << endl;
        break;

    }

    return 0;
}