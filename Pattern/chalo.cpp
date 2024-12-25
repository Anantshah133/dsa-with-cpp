#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int i, j, s;

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        for(s=i; s<5; s++){
            cout << "    ";
        }
        for(j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}