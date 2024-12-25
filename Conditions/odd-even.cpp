#include<iostream>

using namespace std;

int main(){
    int n;

    cout << "Enter Any Number : ";
    cin >> n;

    if(n % 2 == 0){
        cout << "Even Number !";
    } else {
        cout << "Odd Number !";
    }

    return 0;
}