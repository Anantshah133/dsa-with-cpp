#include<iostream>

using namespace std;

int main(){
    int row, col;

    cout << "Enter Number of Rows : ";
    cin >> row;

    cout << "Enter Number of Cols : ";
    cin >> col;

    int arr[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "Enter Value : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int k=0; k < row; k++){
        cout << arr[k][k] << " ";
    }

    cout << endl;
    
    for(int k=0; k < row; k++){
        cout << arr[k][row - k - 1] << " ";
    }

    return 0;
}