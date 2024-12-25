#include<iostream>

using namespace std;

int main(){
    int size, i;

    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];

    for(i=0; i<size; i++){
        cout << "Enter Value : ";
        cin >> arr[i];
    }

    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }


    return 0;
}

// [2004, 2003, 2017, 2008, 2031]
// 2