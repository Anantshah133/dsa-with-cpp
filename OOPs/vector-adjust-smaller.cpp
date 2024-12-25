#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1 = {15, 12, 13, 84, 54, 65, 44, 93, 16};
    vector<int> ans;
    int size = v1.size();

    for(int i = 1; i < size - 1; i++){
        if(v1[i] < v1[i - 1] && v1[i] < v1[i + 1]){
            ans.push_back(v1[i]);
        }
    }

    for(auto ele : ans){
        cout << ele << " ";
    }

    return 0;
}