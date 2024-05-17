#include <iostream>
#include <string>
using namespace std;

class CellPhone{
private:
    string make;
    string model;
    double retail;

public:
    CellPhone (string maker, string mod, double Retail){
        make = maker;
        model = mod;
        retail = Retail;
    }

    void setMake(string maker){
        make = maker;
    }
    void setModel(string mod){
        model = mod;
    }
    void setRetail(double Retail){
        retail = Retail;
    }
    string getMake(){
        return make;
    }
    string getModel(){
        return model;
    }
    double getRetail(){
        return retail;
    }
};

int main(){
    CellPhone myphone("Google", "Redfin", 159.98);

    // myphone.setMake("Google");
    // myphone.setModel("Redfin");
    // myphone.setRetail(159.98);

    cout << "The manufacturer is " << myphone.getMake() << endl;
    cout << "The model is " << myphone.getModel() << endl;
    cout << "The retail price is $" << myphone.getRetail() << endl;






    return 0;
}