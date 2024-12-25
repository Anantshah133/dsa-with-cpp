#include<iostream>

using namespace std;

class Engine {
    public:
        string name;

        void setEngName(string name){
            this->name = name;
        }
};

class Wheel {
    public:
        string company;

        void setCompanyName(string cmp){
            this->company = cmp;
        }
};

class Car : public Engine, public Wheel {
    public:
        string name = "Default";

        void make(){
            cout << "Car has " << Engine::name << " and have " << company << " wheels";
        }
};


int main(){
    Car c1;

    c1.setEngName("V8");
    c1.setCompanyName("CEAT");
    c1.make();
    
    return 0;
}

// Inherit kyaa hoga ??? Jo parent class ke public me hoga wahi