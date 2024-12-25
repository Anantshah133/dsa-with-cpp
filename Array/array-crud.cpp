#include<iostream>

using namespace std;

int main(){
    int size, choice, idx = 0;

    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];

    do {
        cout << endl << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1:
                if(idx >= size){
                    cout << "Array Overflow....." << endl;
                    break;
                }
                int value;

                cout << "Enter The value for insertion : ";
                cin >> value;
                
                arr[idx] = value;
                idx++;
                break;
            case 2:
                for(int val : arr){
                    cout << val << " ";
                }
                break;
            case 3:
                int index, updateValue;

                cout << "Enter Index you want to update : ";
                cin >> index;

                cout << "Enter the value you want to update : ";
                cin >> updateValue;

                arr[index] = updateValue;
                cout << "Value updated : " << updateValue << endl;
                break;
            case 4:
                int v;

                idx--;
                v = arr[idx];
                arr[idx] = 0;

                cout << "Deleted Element : " << v;
                break;
            case 5:
                cout << "Abhaar....";
                break;
            default:
                cout << "Yeh to Gelat heiiii...... Shubh Ratri....." << endl;
                break;
        }
    } while(choice != 5);

    return 0;
}

// [?, ?, ?, ?, ?]

// 1 Insert ✅
// 2 Read ✅
// 3 Update ✅
// 4 Delete ✅
// 5 Exit ✅