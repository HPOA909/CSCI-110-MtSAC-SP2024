#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    string make;
    int year;
    int speed;
public:
    Car(string m, int y){
        year = y;
        make = m;
        speed = 0;
    }
    string setMake(string m){
        make = m;
    }
    void setYear(int y){
        year = y;
    }
    string getMake(){
        return make;
    }
    int getYear(){
        return year;
    }
    void accelerate(){
        speed = speed + 5;
    }
    void brake(){
        speed = speed - 5;
    }
    int getSpeed(){
        return speed;
    }
};

int main(){
    int carYear, index;
    string carMake;

    cout << "Enter car make: ";
    cin >> carMake;

    cout << "Enter the car year: ";
    cin >> carYear;

    Car Auto(carMake, carYear);

    for (index = 0;index<5;index++){
        Auto.accelerate();
    }
    cout << "The car speed after 5 accelerations is " << Auto.getSpeed() << endl;

    for (index = 0;index<3;index++){
        Auto.brake();
    }
    cout << "The car speed after 3 brakes is " << Auto.getSpeed() << endl;

    cout << carMake << endl;
    cout << carYear << endl;

    return 0;
}