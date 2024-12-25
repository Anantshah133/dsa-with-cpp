#include<iostream>

// macros

using namespace std;

void swap(int*, int*);

int main(){
    int a, b;
    const int n = 10;

    cout << "Enter A and B : ";
    cin >> a >> b;

    cout << "Before : " << endl;
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;

    swap(&a, &b); // call by value

    cout << "After : " << endl;
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;

    return 0;
}

void swap(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}