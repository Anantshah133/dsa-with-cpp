#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1 = {15, 12, 13, 84, 54, 65, 44, 93, 16};
    vector<int> v2;
    
    int size = v1.size();

    for(int i = size - 1; i >= 0; i--){
        v2.push_back(v1[i]);
    }

    for(int val : v2){
        cout << val << " ";
    }

    return 0;
}