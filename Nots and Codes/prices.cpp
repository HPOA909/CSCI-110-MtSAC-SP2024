#include <iostream>
using namespace std;

const double DISCOUNT_PER = 0.2;

double getRegularPrice(double);

double discount(double);

int main(){
    double regularPrice, salesPrice;

    regularPrice = getRegularPrice();
    
    cout << "The item's regular price is " << regularPrice << endl;

    salesPrice = regularPrice - discount(regularPrice)

    cout << "The discounted price of the item is " << salesPrice << endl;

    return 0;
}

double discount(double price){
    return price * DISCOUNT_PER;
}

double getRegularPrice(double price){
    double price;
    cout << "Enter the item's regular price: " << endl;
    cin >> price;
    return price;
}