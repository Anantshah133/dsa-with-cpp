#include<iostream>

using namespace std;

int main(){
    int arr[7] = {12, 45, 63, -28, 18, 8, -56}, pos;

    cout << "Enter POS : ";
    cin >> pos;

    for(int i = pos; i < 7; i++){
        cout << arr[i] << " ";
    }

    for(int i = 0; i < pos; i++){
        cout << arr[i] << " ";
    }

    return 0;
}