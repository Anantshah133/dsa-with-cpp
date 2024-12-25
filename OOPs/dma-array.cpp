#include<iostream>

using namespace std;

int main(){
    int *arr = new int[5];

    arr[0] = 10; // 500
    arr[1] = 15; // 504
    arr[2] = 30; // 508
    arr[3] = 50; // 512
    arr[4] = 65; // 516

    cout << *(arr + 5);

    delete[] arr;
    arr = NULL;

    return 0;
}