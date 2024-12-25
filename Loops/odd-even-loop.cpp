#include<iostream>

using namespace std;

int main(){
    int i, n;

    cout << "Enter Any number : ";
    cin >> n; // 50

    for(i=1; i<=n; i++){
        if(i % 2 == 1) cout << i << " ";
    }
    return 0;
}