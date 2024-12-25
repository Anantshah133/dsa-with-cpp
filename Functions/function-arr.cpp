#include <iostream>
using namespace std;

int sumArr(int [], int);

int main(){
    int size, sum;

    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];

    for(int i=0; i < size; i++){
        cout << "Enter Value : ";
        cin >> arr[i];
    }

    sum = sumArr(arr, size);
    cout << sum;
    return 0;
}

int sumArr(int arr[], int size){
    int sum = 0;

    for(int i=0; i < size; i++){
        sum = sum + arr[i];
    }

    return sum;
}