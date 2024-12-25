#include<iostream>

using namespace std;

int main(){
    int size, max = 0;

    cout << "Enter Size of array : ";
    cin >> size;

    int arr[size];

    for(int i=0; i < size; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }

    for(int val : arr){
        if(max < val){
            max = val;
        }
    }

    cout << max;

    return 0;
}