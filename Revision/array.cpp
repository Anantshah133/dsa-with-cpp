#include<iostream>

using namespace std;

int main(){
    int size, max;

    cout << "Enter size : ";
    cin >> size;

    int arr[size];

    for(int i=0; i < size; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }

    max = arr[0];

    for(int i=0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout << max;
    return 0;
}

/* 
    [1, 2, 5, 6, 7] = 1d Array

    [
        [5, 7, 9], = 0
        [6, 8, 5], = 1
        [4, 3, 2]  = 2
    ]

    arr[row][col]
*/