#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream salesFile;
    int numDays;
    double sales;
    salesFile.open("sales.dat");

    cout << "For how many days you have sales?" << endl;
    cin >> numDays;

    for (int counter=1;counter<=numDays;counter++){
        cout << "Enter the sales day #" << counter << endl;
        cin >> sales;
        salesFile << sales << endl;
    }
    salesFile.close();

    return 0;
}