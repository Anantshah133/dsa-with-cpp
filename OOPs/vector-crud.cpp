#include<iostream>
#include<vector>
using namespace std;

int main(){
    int choice, temp = 0;
    vector<int> v1;

    do {
        cout << "\nEnter 1 to Insert...";
        cout << "\nEnter 2 to View all...";
        cout << "\nEnter 3 to Remove...";
        cout << "\nEnter 4 to Update...";
        cout << "\nEnter 5 to Clear....";
        cout << "\nEnter 6 to exit....";
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch(choice){
            case 1 : {
                int idx, ele;
                cout << "Enter index : ";
                cin >> idx; // 0

                cout << "Enter element : ";
                cin >> ele;

                v1.insert(v1.begin() + idx, ele);
            }
            break;
            case 2: {
                if(v1.empty() == true){
                    cout << "Array is empty !!";
                    break;
                }
                
                for(int val : v1){
                    cout << val << " ";
                }
                cout << endl;
            }
            break;
            case 3: {
                int idx;
                cout << "Enter index : ";
                cin >> idx; // 0

                v1.erase(v1.begin() + idx);
            }
            break;
            case 4: {
                int idx, ele;

                cout << "Enter index : ";
                cin >> idx; // 0

                cout << "Enter element : ";
                cin >> ele;

                v1[idx] = ele;
            }
            break;
            case 5: {
                v1.clear();
                cout << "\nKhali done .....\n";
            }
            break;
            case 6:
                cout << "Thank You !";
        }
    } while(choice != 6);

    return 0;
}