#include<iostream>
using namespace std;

class City {
    public:
        string name; // 24

        City(){ // constructor function // default constructor
            this->name = "Surat";
            cout << "Object Created !" << endl;
        }

        City(string ct){ // parameterized constructor
            this->name = ct;
            cout << "This is parameterized constructor !" << endl;
        }

        ~City(){ // destructor
            cout << endl << "Clean up code !" ;
        }
};

int main(){
    City c1, c2;
    City c3("Navsari");
    City c4("Bombay");

    cout << c1.name << " " << c2.name << " " << c3.name << " " << c4.name;

    return 0;
}