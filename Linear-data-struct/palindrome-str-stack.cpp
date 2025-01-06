#include<iostream>
#include<stack>

using namespace std;

bool isPalindrome(string str){
    stack<char> palindromeStk;
    
    for(char ch : str){ // for each
        palindromeStk.push(ch);
    }

    for(char ch : str){
        if(palindromeStk.top() != ch){
            return false;
        }
        palindromeStk.pop();
    }

    return true;
}

int main(){
    string str;

    cout << "Enter any string : ";
    getline(cin, str);

    if(isPalindrome(str) == true){
        cout << "Yesss, Its a palindrome string...." << endl;
    } else {
        cout << "Oops, Its not a palindrome string...." << endl;
    }

    return 0;
}