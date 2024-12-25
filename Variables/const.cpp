#include <iostream>

using namespace std;

int main(){
    int x = 10, y = 30, p;
    
    cout << "Before : x = " << x << " y = "<< y << endl;

    p = x;
    x = y;
    y = p;

    cout << "After : x = " << x << " y = "<< y << endl;
    return 0;
}