#include <iostream>
using namespace std;

const double DISCOUNT_PER = 0.2;

int discount(int);

int main(){
    float regularPrice, salesPrice;
    cout << "Enter the item's regular price: " << endl;
    cin >> regularPrice;

    regularPrice = getRegularPrice();
    
    cout << "The item's regular price is " << regularPrice << endl;

    salesPrice = regularPrice - discount(regularPrice)

    cout << "The discounted price of the item is " << discountedPrice << endl;

    return 0;
}

int discount(int price){
    
}