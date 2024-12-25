#include<iostream>

using namespace std;

int main(){
    int a = 10, b = 20;

    cout << "A : " << a << " B : " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "A : " << a << " B : " << b << endl;
    return 0;
}

// &&
// 1 1 = 1
// 1 0 = 0
// 0 1 = 0
// 0 0 = 0

// ||
// 1 1 = 1
// 1 0 = 1
// 0 1 = 1
// 0 0 = 0