#include<iostream>

using namespace std;

int main(){
    int p, r, n;
    float si;

    cout << "Enter Principle Amount, Rate Of interest and Number of years : ";
    cin >> p >> r >> n;

    si = (p * r * n) / 100;

    cout << "Simple Interest = " << si + p;

    return 0;
}