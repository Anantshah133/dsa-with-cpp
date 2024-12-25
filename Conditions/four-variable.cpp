#include<iostream>

using namespace std;

int main(){
    int a, b, c, d, max;

    cout << "Enter 4 Numbers : ";
    cin >> a >> b >> c >> d;

    max = a;

    if(max < a) max = a;
    if(max < b) max = b;
    if(max < c) max = c;
    if(max < d) max = d;

    cout << "This is the max value : " << max;

    return 0;
}