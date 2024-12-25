#include<iostream>
using namespace std;

bool checkPalindrome(string); // functions - procedures

int main(){
    string str;

    cout << "Enter any string : ";
    getline(cin, str);

    checkPalindrome(str) ? cout << "\nIts palindrome String ...." : cout << "\nIts not palindrome String ....";

    return 0;
}

bool checkPalindrome(string str){
    int start = 0, end = str.size() - 1;

    while(start <= end){
        if(str[start] == str[end]){
            start++;
            end--;
        } 
        else return false;
    }

    return true;
}