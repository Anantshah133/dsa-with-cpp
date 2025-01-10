#include<iostream>
#include<vector>

using namespace std;

void disaplay(vector<int>); // declaration (Prototype)
void insertionSort(vector<int>, int);

int main(){
    vector<int> arr(6);
    int n = arr.size();

    for(int i=0; i < n; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }

    cout << "Before : " << endl;
    disaplay(arr); // calling

    insertionSort(arr, n);


    return 0;
}
void disaplay(vector<int> arr){ // function body
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
} 

void insertionSort(vector<int> arr, int size){
    int key;
    for(int i = 1; i < size; i++){
        key = arr[i];
        int j = (i - 1);

        while(j >= 0){
            if(key < arr[j]){
                arr[j + 1] = arr[j];
                j--;
            } else {
                break;
            }
        }

        arr[j + 1] = key;
    }

    disaplay(arr);
}