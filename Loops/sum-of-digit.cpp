#include<iostream>

using namespace std;

int main(){
    int n, sum = 0, r, count = 0;

    cout << "Enter N : ";
    cin >> n;

    while(n != 0){
        r = n % 10;
        sum = sum + r;
        count++;
        n = n / 10;
    }
 
    cout << "Count : " << count << endl;
    cout << "Sum : " << sum << endl;

    return 0;
}