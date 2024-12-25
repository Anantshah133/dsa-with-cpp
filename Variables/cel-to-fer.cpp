#include<iostream>

using namespace std;

int main(){
    int c;

    cout << "Enter Celsius : ";
    cin >> c;

    cout << "Tapman In Fahrenheit : " << (1.8 * c) + 32;

    return 0;
}