#include<iostream>

using namespace std;

int main(){
    int x;

    cout << "Enter your Age : ";
    cin >> x;

    cout << "Address : " << &x; // ambpersand

    return 0;
}