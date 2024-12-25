#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int i, j, s;

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            // cout << i << j << "  ";
            if(j == 1 || (j == 5 && i < 4) || i == 1 || i == 3){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

// * * * * *
// *       *
// * * * * *
// *       
// *       

//  *       * * * * *
//  *       *
//  *   *   *   *
//  *       *
//  * * * * * * * * *
//          *       *
//      *   *   *   *
//          *       *
//  * * * * *       *