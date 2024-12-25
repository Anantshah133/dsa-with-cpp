#include <iostream>
using namespace std;

int strlen(string);

int main(){
    string str;
    int len;

    cout << "Enter any String : ";
    getline(cin, str);

    len = strlen(str);

    cout << "String Length is : " << len;

    return 0;
}

int strlen(string str){ //
    int count = 0;

    for(int i=0; str[i] != '\0'; i++){
        count++;
    }

    return count;
}

// 1. Count the characters in string (not space). // tsrs
// 2. A E I O U find vowels from string. // tsrs
// 3. Count the number of char, num, and special char from string. // tsrn