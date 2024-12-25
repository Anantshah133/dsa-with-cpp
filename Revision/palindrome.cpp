#include<iostream>

using namespace std;

int main(){
    int n, rem, ans = 0, temp;

    cout << "Enter N : ";
    cin >> n;

    temp = n;

    while(n != 0){
        rem = n % 10;
        ans = (ans * 10) + rem;
        n = n / 10;
    }

    if(temp == ans){
        cout << "Yayy, Its a palindrome number !";
    } else {
        cout << "Oops, Its Not a palindrome number !";
    }

    return 0;
}