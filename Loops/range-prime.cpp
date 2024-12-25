#include<iostream>

using namespace std;

int main(){
    int start, end, i, j;
    bool flag = true;

    cout << "Enter Start & End : ";
    cin >> start >> end;

    for(i=start; i<=end; i++){
        flag = true;
        for(j=2; j*j < i; j++){
            if(i % j == 0){
                flag = false;
                break;
            }
        }
        if(flag) cout << i << " ";
    }

    return 0;
}

// 2 3 5 7 11 13 17 19 23 29