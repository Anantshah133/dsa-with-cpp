#include<iostream>

using namespace std;

int main(){
    int num;

    cout << "Enter any number (1-9) : ";
    cin >> num;
    
    if(num == 1){
        cout << "One";
    } else if(num == 2) {
        cout << "Two";
    } else if(num == 3) {
        cout << "thri";
    } else if(num == 4) {
        cout << "for";
    } else if(num == 5) {
        cout << "faiv";
    } else {
        cout << "Out of range";
    }
    return 0;
}