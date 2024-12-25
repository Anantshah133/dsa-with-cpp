#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, temp = 0;
    vector<int> v1; // heap area

    v1.push_back(45);
    v1.push_back(18);
    v1.push_back(10);
    v1.push_back(78);
    v1.push_back(66);

    // v1.insert(v1.begin() + 3, {55, 44, 88});

    v1.erase(v1.begin(), v1.end() - 1);

    // cout << "Size : " << v1.size() << endl;

    // cout << "Is array empty : " << v1.empty() << endl;

    for(int val : v1){
        cout << val << " ";
    }

    // cout << "Front : " << v1.front() << endl;
    // cout << "Back : " << v1.back() << endl;

    return 0;
}