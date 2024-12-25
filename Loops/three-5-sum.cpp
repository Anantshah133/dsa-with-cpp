#include<iostream>

using namespace std;

int main(){
    int n, i, sum = 0;

    cout << "Enter N : ";
    cin >> n;

    for(i=2; i < n; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum = sum + i;
        }
    }

    cout << sum;

    return 0;
}
