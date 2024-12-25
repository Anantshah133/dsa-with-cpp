#include<iostream>

using namespace std;

int main(){
    int n, ans = 0, r, temp;

    cout << "Enter N : ";
    cin >> n;

    temp = n;
    
    while(n != 0){
        r = n % 10;
        ans = (ans * 10) + r;
        n /= 10;
    }

    if(ans == temp){
        cout << "Yeahh Its palindrome Number !";
    } else {
        cout << "Oops Its not palindrome Number !";
    }

    return 0;
}

// 1. Reverse A number
// 2. Sum of digit
// 3. Count of Digit
// 4. Palindrome