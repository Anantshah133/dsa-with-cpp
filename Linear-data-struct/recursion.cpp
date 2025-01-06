#include<iostream>

using namespace std;

// 5! => 5* 4 * 3 * 2 * 1 = 120
// 1! => 1 = 1
// 0! => 1
// -5! => 1

// recursion
int fact(int n){ // recursive function (3)
    if(n <= 1){
        return 1;
    } else {
        return n * fact(n - 1); 
        //     3 * fact(2)
        //         2 * fact(1)
        //            1 
    }
}

int main(){
    int n;

    cout << "Enter any number : ";
    cin >> n;

    cout << "Factorial of number is : " << fact(n); 

    return 0;
}
