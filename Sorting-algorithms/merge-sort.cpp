#include<iostream>
#include<vector>

using namespace std;

void disaplay(vector<int>);
void mergeSort(vector<int> &, int, int);
void merge(vector<int> &, int, int, int);

int main(){
    int n;

    cout << "Enter n : ";
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i < n; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }

    disaplay(arr);
    mergeSort(arr, 0, n - 1); // 1st call
    disaplay(arr);

    return 0;
}

void disaplay(vector<int> arr){ // function body
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
} 

void mergeSort(vector<int> &arr, int low, int high){
    if(low >= high) return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid); // for left array
    mergeSort(arr, mid + 1, high); // for right array
    merge(arr, low, mid, high); // this is for merging array
}

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }


    // Adjust the remaining elements of the left array
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    // Adjust the remaining elements of the right array
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    // Most Imp Step
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}