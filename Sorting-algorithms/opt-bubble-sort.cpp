#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, temp, count = 0;
    vector<int> arr(10, 5);
    bool swapped = false;

    n = arr.size();

    for(int i = 0; i < n; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            swapped = false;
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swapped = true;
            }
            count++;
        }

        if(!swapped){
            break;
        }
    }

    cout << count << endl;

    cout << endl << "After : " << endl;
    for(int val : arr){
        cout << val << " ";
    }
    return 0;
}