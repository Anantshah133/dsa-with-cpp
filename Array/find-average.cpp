#include<iostream>

using namespace std;

int main(){
    int row, col, sum = 0;

    cout << "Enter Number of Rows : ";
    cin >> row; // 8

    cout << "Enter Number of Cols : ";
    cin >> col; // 8

    int arr[row][col];

    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
            cout << "Enter Value : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
            sum = sum + arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << (float) sum / (row * col);

    cout << "";

    return 0;
}