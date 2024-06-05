#include <iostream>
using namespace std;

class Plant{
    public:
        virtual void message(){
            cout << "I'm a plant.";
        };
};
class Tree : public Plant {
    public:
        virtual void message(){
            cout << "I'm a tree.";
        };
};

int main(){
    Tree p;
    p.message();

    return 0;
}