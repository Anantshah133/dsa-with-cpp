#include<iostream>

using namespace std;

int main(){
    int i, j, rowSize, colSize, rowNum, colNum, sum = 0;

    cout << "Enter row : ";
    cin >> rowSize;

    cout << "Enter col : ";
    cin >> colSize;

    int arr[rowSize][colSize];

    for(int i=0; i< rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cout << "Enter Value : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for(int i=0; i< rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }

    cout << "Enter row number : ";
    cin >> rowNum; // 0

    for(int k = 0; k < rowSize; k++){
        sum = sum + arr[rowNum][k]; 
    }

    cout << "Row Sum : " << sum << endl;

    sum = 0;

    cout << "Enter col number : ";
    cin >> colNum; // 0

    for(int k = 0; k < colSize; k++){
        sum = sum + arr[k][colNum];
    }

    cout << "Col Sum : " << sum << endl;

    return 0;
}

// [7, 4, 5] = Alice
// [2, 8, 9] = Bob

// Alice = 1
// bob = 2