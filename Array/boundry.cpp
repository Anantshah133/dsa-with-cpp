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

    cout << endl << "First row : ";
    for(int k = 0; k < col; k++){
        cout << arr[0][k] << " ";
    }
    cout << endl << endl;

    cout << "Last row : ";
    for(int k = 0; k < col; k++){
        cout << arr[row-1][k] << " ";
    }

    cout << endl << endl;
    cout << "Last col : ";
    for(int k = 0; k < row; k++){
        cout << arr[k][col - 1] << " ";
    }

    cout << endl << endl;
    cout << "First col : ";
    for(int k = 0; k < row; k++){
        cout << arr[k][0] << " ";
    }

    return 0;
}