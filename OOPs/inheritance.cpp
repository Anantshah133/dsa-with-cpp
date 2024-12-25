#include<iostream>

using namespace std;

class Animal {
    public:
        string name;
        void canEat(){
            cout << "This can eat food....." << endl;
        }
};

class Dog : public Animal {
    public:
        void canBark(){
            cout << "Bhau bhau !" << endl; 
        }
};

class Pitbull : public Dog {
    public:
        void getName(){
            cout << "Naagraj" << endl;
        }
};

int main(){
    Pitbull p1;

    p1.canEat();
    p1.canBark();
    p1.getName();
    
    return 0;
}

// Inherit kyaa hoga ??? Jo parent class ke public me hoga wahi