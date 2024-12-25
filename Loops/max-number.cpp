#include<iostream>

using namespace std;

int main(){
    
    int i, n, rem, max = 0;

    while(n != 0){
        rem = n % 10;
        if(max < rem) max = rem;
        n /= 10;
    }

    cout << "Max digit : " << max;

    return 0;
}