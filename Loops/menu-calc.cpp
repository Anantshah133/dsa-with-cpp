#include<iostream>

using namespace std;

int main(){
    int i, x, y, choice;

    do {
        cout << "Enter X and Y : ";
        cin >> x >> y;

        cout << "Enter 1 for (+)\nEnter 2 for (-)\nEnter 3 for (*)\nEnter 4 for (/)\nEnter 5 for Exit....\n";

        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Add : " << x + y << endl;
                break;
            case 2:
                cout << "Sub : " << x - y << endl;
                break;
            case 3:
                cout << "Mul : " << x * y << endl;
                break;
            case 4:
                cout << "Div : " << x / y << endl;
                break;
            case 5:
                cout << "/ -------------------------- /" << endl;
                cout << "/ Thank you visit again..... /" << endl;
                cout << "/ -------------------------- /" << endl;
                break;
            default:
                cout << "Tu rehne de bhai......." << endl;
        }
    } while(choice != 5);

    return 0;
}