#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    string name;
    int number;
    int rate;
    int hour;
    int total;
public:
    Employee(string n, int num, int hr, int r){
        name = n;
        number = num;
        rate = r;
        hour = hr;
        total = 0;
    }
    void setName(string n){
        name = n;
    }
    void setNumber(int num){
        number = num;
    }
    void setHour(int hr){
        hour = hr;
    }
    string getName(){
        return name;
    }
    int getNumber(){
        return number;
    }
    int getHour(){
        return hour;
    }
    int calcRate(int rate, int hour){
        total = rate * hour;
        return total;
    }
};

int main(){
    string EName;
    int ID;
    int hours;
    int Rate;

    cout << "Enter employee name" << endl;
    cin >> EName;

    cout << "Enter enployee ID" << endl;
    cin >> ID;

    cout << "Enter # of hours" << endl;
    cin >> hours;

    cout << "Enter hourly rate" << endl;
    cin >> Rate;

    Employee employee(EName, ID, hours, Rate);

    cout << "The employee name is " << employee.getName() << endl;
    cout << "The employee ID is " << employee.getNumber() << endl;
    cout << "The employee working hours: " << employee.getHour() << endl;
    cout << "The salary/check is $" << employee.calcRate(Rate, hours) << endl;

    return 0;
}