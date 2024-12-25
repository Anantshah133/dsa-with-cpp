#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int i, j, s;

    for(i=5; i>=1; i--){
        for(s=(i-1); s>=1; s--){
            cout << "  ";
        }
        for(j=i; j<=5; j++){
            cout << j << " ";
        }
        for(j=5; j>=i; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}