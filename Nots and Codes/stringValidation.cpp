#include <iostream>
#include <string>
using namespace std;

int main(){
    string answer;
    cout << "Is your supervisor is an effective leader?" << endl;
    cin >> answer;

    while (answer != "yes" && answer != "no"){
        cout << "Wrong answer! Please anser yes or no!" << endl;
        cout << "Provide your answer again:" << endl;
        cin >> answer;
    }

    return 0;
}