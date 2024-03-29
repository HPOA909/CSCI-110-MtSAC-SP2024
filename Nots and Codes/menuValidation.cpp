#include <iostream>
using namespace std;

int main(){
    int menu;
    bool valid = false;

    do{
        cout << "1. Ramen" << endl;
        cout << "2. Sushi" << endl;
        cout << "3. Wonton" << endl;
        cout << "4. Dumpling" << endl;
        cout << "5. Fried rice" << endl;
        cout << endl;
        cout << "Enter your choice:" << endl;
        cin >> menu;
        if (menu >= 1 && menu <= 5){
            valid = true;
        }else{
            cout << "Invalid selection. Please enter again." << endl;
        }
    }while(valid);

    cout << "Choice #" << menu << "is ordered" << endl;

    return 0;
}
