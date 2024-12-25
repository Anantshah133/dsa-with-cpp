#include<iostream>
using namespace std;

class Student {
    private:
        int age;
        string name;
        bool isDeveloper; // attributes / data members / properties / variables
    public:
        void setData(int a, string n, bool dev){ // parameters
            age = a;
            name = n;
            isDeveloper = dev;
        }

        void getData(){ // member functions / features / methods
            cout << "Age : " << age << endl;
            cout << "Name : " << name << endl;
            cout << "Developer hei : " << isDeveloper << endl;
        }
};

void sayHello(){ // procedures / functions
    cout << "Hellooo .... ";
}


int main(){
    Student s1, s2, s3, s4, s5; // instance / object

    s1.setData(20, "Aryan", false); // arguments / actual parameter
    s1.getData();

    s2.setData(22, "Shreya", true);
    s2.getData();

    return 0;
}