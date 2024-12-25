#include<iostream>

using namespace std;

int main(){
    string s;

    cout << "Enter Your name : ";
    getline(cin, s);

    cout << s + s;
    return 0;
}