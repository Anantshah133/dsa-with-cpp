#include<iostream>

using namespace std;

int main(){
    int n, i;
    bool flag = true;

    cout << "Enter any number : ";
    cin >> n;
    
    for(i=2; i*i < n; i++){ 
        if(n % i == 0){
            cout << "Its Not prime Number....";
            return 0;
        }
    }

    if(flag){
        cout << "Its a prime Number....";
    }
    return 0;
}