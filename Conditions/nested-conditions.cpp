#include<iostream>

using namespace std;

int main(){
    int a, b;

    cout << "Enter A and B : ";
    cin >> a >> b;

    if(a == b){
        cout << "Both Are Same.....";
        return 0;
    }

    if(a > b){
        cout << "A is bigger.....";
    } else {
        cout << "B is bigger.....";
    }
    return 0;
}