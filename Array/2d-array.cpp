#include<iostream>

using namespace std;

int main(){
    int row, col;

    cout << "Enter Number of Rows : ";
    cin >> row;

    cout << "Enter Number of Cols : ";
    cin >> col;

    int x[row][col];

    for(int i=0; i < row; i++){ // for rows
        for(int j=0; j < col; j++){ // for cols
            cout << "Enter value : ";
            cin >> x[i][j];
        }
        cout << endl;
    }

    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}