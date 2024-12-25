#include<iostream>

using namespace std;

int main(){
    int n, i, sum = 0;

    cout << "Enter N : ";
    cin >> n;

    for(i=1; i <= n; i++){
        sum += i;
    }

    cout << "Sum : " << sum << endl;
    return 0;
}