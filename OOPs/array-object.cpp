#include<iostream>

using namespace std;

class Car {
    private:
        int modelNo;
        string brand;
        string color;
        
    public:
        void setCarInfo(){
            cout << "Enter car company : ";
            getline(cin, this->brand);

            cout << "Enter model No : ";
            cin >> this->modelNo;

            cin.ignore();

            cout << "Enter car color : ";
            getline(cin, this->color);
        }

        void getCarInfo(){
            cout << "Car Company : " << this->brand << endl;
            cout << "Model No : " << this->modelNo << endl;
            cout << "Color : " << this->color << endl;
        }
};

int main(){
    int n;

    cout << "How Many cars you have : ";
    cin >> n;

    cin.ignore();

    Car c1[n];

    for(int i = 0; i < n; i++){
        c1[i].setCarInfo();
    }

    for(int i = 0; i < n; i++){
        cout << endl;
        c1[i].getCarInfo();
    }

    return 0;
}