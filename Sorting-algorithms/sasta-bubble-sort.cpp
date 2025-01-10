#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, temp, count = 0;
    vector<int> arr(5);

    n = arr.size();

    for(int i = 0; i < n; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }

    cout << "Before : " << endl;
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl << endl;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            count++;
        }
        for(int val : arr){
            cout << val << " ";
        }
        cout << endl;
    }

    cout << count << endl;

    cout << endl << "After : " << endl;
    for(int val : arr){
        cout << val << " ";
    }

    return 0;
}