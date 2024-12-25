#include<iostream>

using namespace std;

int main(){
    long long int a = 0, b = 1, n, ans;

    cout << "Enter N : ";
    cin >> n;

    cout << a << " " << b << " "; // 0 1

    for(int i = 2; i < n; i++){
        ans = a + b;
        cout << ans << " ";

        a = b;
        b = ans;
    }

    return 0;
}

// 0 1 1 2 3 5 8 13 21 34
// 5 - 10

// 1. Ranged fibonacci series
// 2. Sum of prime numbers from fibonacci series from range