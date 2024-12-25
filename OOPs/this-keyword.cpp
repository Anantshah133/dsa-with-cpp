#include<iostream>
using namespace std;

class Student {
    private:
        int age;
        string name;
        bool isDeveloper;

    public:
        void setData(){
            cout << "Enter your name : ";
            getline(cin, this->name);

            cout << "Enter your age : ";
            cin >> this->age;

            cout << "Are you developer ? : ";
            cin >> this->isDeveloper;
        }

        void getData(){
            cout << "Age : " << this->age << endl;
            cout << "Name : " << this->name << endl;
            cout << "Developer hei : " << (this->isDeveloper == 1 ? "Yes" : "No") << endl;
        }

        Student* getInstance(){
            return this;
        }
};

int main(){
    Student s1, s2;
    Student* s3;

    s1.setData();

    s3 = s1.getInstance();

    s3->getData(); // points to

    return 0;
}