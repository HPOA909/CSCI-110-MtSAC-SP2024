#include <iostream>
#include <string>
using namespace std;

class ServiceQuote{
private:
    double partsCharge;
    double laborCharge;
public:
    ServiceQuote(double pc, double lc){
        partsCharge = pc;
        laborCharge = lc;
    }
    void setPartsCharge(double pc){
        partsCharge = pc;
    }
    void setLaborCgarge(double lc){
        laborCharge = lc;
    }
    double getPartsCharge(){
        return partsCharge;
    }
    double getLaborCharge(){
        return laborCharge;
    }
    double getSalesTax(double taxRate){
        return partsCharge * taxRate;
    }
    double getTotalCharge(double taxRate){
        return partsCharge + laborCharge + getSalesTax(taxRate);
    }
};

int main(){
    double parts = 100.0;
    double labor = 50.0;
    double taxRate = 0.08;

    ServiceQuote quote(parts, labor);

    cout << "Parts Charge: $" << quote.getPartsCharge() << endl;
    cout << "Labor Charge: $" << quote.getLaborCharge() << endl;
    cout << "Sales Tax: $" << quote.getSalesTax(taxRate) << endl;
    cout << "Total Charges: $" << quote.getTotalCharge(taxRate) << endl;

    return 0;
}