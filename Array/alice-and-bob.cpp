#include<iostream>

using namespace std;

int main(){
    int a[3] = {7, 8, 10};
    int b[3] = {2, 8, 9};
    int arr[2];
    int alice = 0, bob = 0;

    for(int i=0; i < 3; i++){
        if(a[i] > b[i]){
            alice++;
        } else if(a[i] < b[i]) {
            bob++;
        }
    }

    if(alice > bob){
        cout << "Alice Won !";
    } else if(bob > alice){
        cout << "Bob Won !";
    } else {
        cout << "Draw !";
    }

    arr[0] = alice;
    arr[1] = bob;

    return 0;
}