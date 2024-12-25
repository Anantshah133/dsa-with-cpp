#include<iostream>

using namespace std;

int main(){
    int i, size;

    cout << "Enter Size of array : ";
    cin >> size; // 5

    int a1[size], a2[size], a3[size];

    for(i=0; i<size; i++){
        cout << "Enter Value at " << i << " : ";
        cin >> a1[i];
    }

    for(i=0; i<size; i++){
        cout << "Enter Value at " << i << " : ";
        cin >> a2[i];
    }

    for(i=0; i<size; i++){
        a3[i] = a1[i] + a2[i];
        cout << a3[i] << " ";
    }

    return 0;
}