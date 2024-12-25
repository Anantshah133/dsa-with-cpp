#include <iostream>

using namespace std;

int cube(int);

int main(){
    int n;

    cout << "Enter N : ";
    cin >> n;

    cout << "Thala for a reason : " << cube(n);

    return 0;
}

int cube(int n) {
    return n * n * n;
}