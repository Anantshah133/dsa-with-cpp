#include<iostream>

using namespace std;

class Student {
    public:
        int grid;
        string name;
        static string scl;

        static void getSchool(){
            cout << endl << scl << endl;
        }
};

string Student::scl = "RNW";

int x = 10;

int main(){
    Student s1, s2;

    // cout << s1.scl << endl;
    // cout << s2.scl << endl;

    // cout << Student::scl;
    Student::getSchool();

    return 0;
}

// 1. Try Catch
// 2. Main function is out of class