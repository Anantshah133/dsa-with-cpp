#include<iostream>
using namespace std;

int main(){    
    int a = 18; // ff0614

    int *ptr;
    ptr = &a; // ptr = ff0614 Pointer variable


    cout << *ptr;

    return 0;
}