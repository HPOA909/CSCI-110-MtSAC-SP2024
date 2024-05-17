#include <iostream>
#include <string>
using namespace std;

class Customer{
private:
    string name;
    string address;
    string phone;

public:
    Customer(string n, string a, string p){
        name = n;
        address = a;
        phone = p;
    }

    void setName(string n){
        name = n;
    }

    void setAddress(string a){
        address = a;
    }

    void setPhone(string p){
        phone = p;
    }

    string getName(){
        return name;
    }

    string getAddress(){
        return address;
    }

    string getPhone(){
        return phone;
    }

    void displayInfo(){
        cout << "Customer name: " << name << endl;
        cout << "Customer address: " << address << endl;
        cout << "Customer phone: " << phone << endl;
    }
};

int main(){
    Customer customer("Aaron Pie", "1234 Adventure Ave", "800 900 8888");

    customer.displayInfo();
    
    return 0;
}