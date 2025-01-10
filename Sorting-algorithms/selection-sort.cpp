#include<iostream>
#include<vector>

using namespace std;

void disaplay(vector<int>); // declaration (Prototype)
void selectionSort(vector<int>, int);

int main(){
    vector<int> arr(6);
    int n = arr.size();

    for(int i=0; i < n; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }

    cout << "Before : " << endl;
    disaplay(arr); // calling

    selectionSort(arr, n);

    return 0;
}
void disaplay(vector<int> arr){ // function body
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
} 

void selectionSort(vector<int> arr, int size){
    for(int i = 0; i < size - 1; i++){
        int minIdx = i;

        for(int j = (i + 1); j < size; j++){
            if(arr[minIdx] > arr[j]){
                minIdx = j;
            }
        }

        if(minIdx != i){
            int temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
        }
    }


    disaplay(arr);
}