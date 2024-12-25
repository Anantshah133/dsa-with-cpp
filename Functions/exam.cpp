#include<iostream>

using namespace std;

int add(int,int);
int sub(int,int);
int dv(int,int);
int mul(int,int);

int getValue(string);

int main(){
    int choice, a, b, ans;

    do {
        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1:
                a = getValue("Number of Years");
                b = getValue("Rate Of Interest");

                ans = add(a, b);
                cout << "Sum : " << ans << endl;
                break;
            case 2:
                a = getValue("A");
                b = getValue("B");

                ans = sub(a, b);

                cout << "Sub : " << ans << endl;
                break;
            case 3:
                a = getValue("A");
                b = getValue("B");

                ans = mul(a, b);

                cout << "Mul : " << ans << endl;
                break;
            case 4:
                a = getValue("P");
                b = getValue("Q");

                ans = dv(a, b);

                cout << "Div : " << ans << endl;
                break;
            default:
                cout << "Jai hind !";
                break;
        }
    } while(choice != 0);

    return 0;
}

int add(int x, int y){
    int sum = x + y;
    return sum;
}
int sub(int p, int q){
    return p-q;
}
int dv(int a, int b) {
    return a / b;
}
int mul(int a, int b){
    return a * b;
}

int getValue(string var){
    int x;

    cout << "Enter the value of " << var << " : ";
    cin >> x;

    return x;
}