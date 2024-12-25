#include<iostream>

using namespace std;

int main(){
    int x;
    int *ptr = new int(10); // parameterized constructor

    cout << *ptr << " " << ptr << endl;

    delete ptr;
    ptr = NULL;

    cout << *ptr << " " << ptr;
    return 0;
}
// heap = 4 = 500