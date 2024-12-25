#include<iostream>

using namespace std;

int main(){
    int arr[5] = {15, 5, 61, 38, 91}, j;
    bool flag = true;

    for(int val : arr){
        flag = true;

        for(j=2; j < val; j++){
            if(val % j == 0){
                flag = false;
                break;
            }
        }
        
        if(flag){
            cout << val << " ";
        }
    }

    return 0;
}