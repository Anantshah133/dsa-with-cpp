#include<iostream>

using namespace std;

int main(){
    int a1, a2, a3;

    cout << "Enter Angle 1 : ";
    cin >> a1;
    
    cout << "Enter Angle 2 : ";
    cin >> a2;

    cout << "Final Angle is : " << 180 - (a1 + a2);

    return 0;
}