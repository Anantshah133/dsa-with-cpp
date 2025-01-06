#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> binaryStack; // 4
    int n;

    cout << "Enter n : ";
    cin >> n;

    while(n > 0){
        int rem = n % 2;
        binaryStack.push(rem);
        n = n / 2;
    }

    while(!binaryStack.empty()){
        cout << binaryStack.top();
        binaryStack.pop();
    }

    return 0;
} 