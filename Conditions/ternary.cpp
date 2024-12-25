#include<iostream>

using namespace std;

int main(){
    //  ? : ;
    int aage, x, y;

    cout << "Enter X and Y : ";
    cin >> x >> y;

    aage = x > y ? x : y;

    cout << aage;
    
    return 0;
}