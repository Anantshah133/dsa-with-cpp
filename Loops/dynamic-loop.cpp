#include<iostream>

using namespace std;

int main(){
    int i, num;

    cout << "Enter the num : ";
    cin >> num; // 5

    for(i = 1; i <= 10; i++){
        cout << num << " * " << i << " : " << num * i << endl;
    }

    return 0;
}