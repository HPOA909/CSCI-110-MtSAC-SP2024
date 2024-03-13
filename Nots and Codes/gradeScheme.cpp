#include <iostream>
using namespace std;

int main(){
    double score;

    cout << "Enter score: " << endl;
    cin >> score;

    if (score < 60)
        cout << "Your grade is F!" << endl;
    else if (score < 70)
        cout << "Your score is D!" << endl;
    else if (score < 80)
        cout << "Your grade is C!" << endl;
    else if (score < 90)
        cout << "Your score is B!" << endl;
    else
        cout << "Your score is A!" << endl;

    return 0;
}