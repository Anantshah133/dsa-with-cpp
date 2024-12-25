#include<iostream>

using namespace std;

class Student {
    private:
        int age;
        int grid;
        string name;
    public:
        void setValue(){
            cout << "Enter your name : ";
            getline(cin, this->name);

            cout << "Enter your age : ";
            cin >> this->age;

            cout << "Enter your GRID : ";
            cin >> this->grid;            

            cin.ignore();

            cout << endl;
        }

        void getValue(){
            cout << "Name : " << this->name << endl;
            cout << "age : " << this->age << endl;
            cout << "Grid : " << this->grid << endl;
        }
};

int main(){
    Student s1[3], s2, s3;

    for(int i = 0; i < 3; i++){
        s1[i].setValue();
        s1[i].getValue();
    }

    return 0;
}