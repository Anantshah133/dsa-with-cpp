#include<iostream>

using namespace std;

void change(int*);

int main(){
    int a = 15;

    cout << a << endl;

    change(&a);

    cout << a << endl;

    return 0;
}

void change(int *x){
    *x = 10;
}