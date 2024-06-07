#include <iostream>
using namespace std;

class Vegitable{
    public:
        virtual void message(){
            cout << "I'm a vegitable." << endl;
        }
};

class Potato : public Vegitable{
    public:
        virtual void message(){
            cout << "I'm a potato." << endl;
        }
};

int main(){
    Vegitable v;
    Potato p;

    v = Potato();
    p = Potato();

    v.message();
    p.message();

    return 0;
}