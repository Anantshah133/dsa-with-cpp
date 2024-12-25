#include<iostream>
using namespace std;

class Math {
    private:
        int a, b;
    public:
        void add(){
            cout << "Enter a ";
            cin >> this->a;

            cout << "Enter b";
            cin >> this->b;

            cout << this->a + this->b;
        }

        void add(int a, int b){ // parameters
            this->a = a;
            this->b = b;
            cout << "Sum : " << this->a + this->b << endl;
        }

        void add(float a, float b){
            cout << "Sum : " << a + b << endl;
        }
};

int main(){
    Math m1;

    m1.add(25.3f, 35.8f);

    return 0;
}