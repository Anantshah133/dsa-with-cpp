#include<iostream>

using namespace std;

int main(){
    int a, b, c;

    cout << "Enter A and B and C : ";
    cin >> a >> b >> c;

    if((a == b) && (b == c)){
        cout << "All are Same !";
        return 0;
    }
    
    if(a > b){
        if(a > c){
            cout << "A Sabse Bada hei .....";
        } else {
            cout << "C Sabse Bada hei .....";
        }
    } else if(b > c){
        cout << "B Sabse Bada hei .....";
    } else {
        cout << "C Sabse Bada hei .....";
    }

    return 0;
}