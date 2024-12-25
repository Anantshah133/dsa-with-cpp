#include <iostream>

using namespace std;

void sum(int,int); // declaration

int main(){
    int x,y;

    cout << "enter the value of x and y : ";
    cin  >> x >> y;

    sum(x,y); // calling
    
    return 0;
}

void sum(int a,int b){ // body
    cout << a + b;
}