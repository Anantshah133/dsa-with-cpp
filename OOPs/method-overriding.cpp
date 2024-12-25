#include<iostream>
using namespace std;

class India {
    private:
        int pop;
    public:
        virtual void wear(){
            cout << "Dhoti - Kurta......" << endl;
        }
};

class Pak : public India {
    public:
        void wear(){
            cout << "Pathani - Kurta....." << endl;
        }
};

int main(){
    India o1;
    Pak p1;

    // India *ptr;
    // ptr = &p1;

    // o1.wear();
    // ptr->wear();
    // p1.wear();

    return 0;
}