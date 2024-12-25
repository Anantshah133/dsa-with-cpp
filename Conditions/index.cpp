#include<iostream>

using namespace std;

int main(){
    int choice;

    cout << "Enter 1 for Pav Bhaji\nEnter 2 for Item\nEnter 3 for Rasgulla\nEnter 4 for Jalebi\nEnter 5 for Bill.....\n";
    cout << "Enter your choice : ";
    cin >> choice;
        
    if(choice == 1){
        cout << "Your Pav Bhaji is Here......";
    } else if(choice == 2){
        cout << "Your Item is Here......";
    } else if(choice == 3){
        cout << "Your Rasgulla is Here......";
    } else if(choice == 4){
        cout << "Your Jalebi is Here......";
    } else if(choice == 5) {
        cout << "Your Bill is here.....";
    } else {
        cout << "Invalid choice !";
    }

    return 0;
}