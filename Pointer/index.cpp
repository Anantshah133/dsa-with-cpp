#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;
  
    int **doublePtr = &ptr;

    cout << **doublePtr;

    return 0;
}