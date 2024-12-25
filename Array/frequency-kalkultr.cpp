#include<iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 5, 3, 1, 4, 3, 4, 5};
    int freq[10] = {};

    for(int i = 0; i < 10; i++){
        int idx = arr[3];
        freq[5]++;
    }

    for(int i=0; i < 10; i++){
        if(freq[i] != 0) cout << i << " -> " << freq[i] << endl;
    }

    return 0;
}

// [0, 1, 1, 1, 0, 1, 0, 0, 0, 0] = value = freq[i]
//  0  1  2  3  4  5  6  7  8  9  = idx   = i