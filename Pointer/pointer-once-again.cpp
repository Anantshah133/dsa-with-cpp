#include<iostream>

using namespace std;

int main(){
    int a = 18;
    int *p = &a;

    // cout <<  << " " << &a;

    int **dblPtr = &p;

    cout << **dblPtr;


    return 0;
}