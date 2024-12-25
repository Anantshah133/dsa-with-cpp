#include<iostream>

using namespace std;

int main(){
    int payo, vedh;
    float area;

    cout << "Enter Base : ";
    cin >> payo;

    cout << "Enter Height : ";
    cin >> vedh;

    area = 0.5 * payo * vedh;

    cout << "Area of Trikon is : " << area;

    return 0;
}