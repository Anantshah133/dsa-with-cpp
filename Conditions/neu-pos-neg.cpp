#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter N : ";
    cin >> n;

    if(n == 0){
        cout << "Its Neutral Number !";
        return 0;
    }

    if(n > 0){
        cout << "Its Positive Number !";
    } else {
        cout << "Its Negative Number !";
    }
    
    return 0;
}