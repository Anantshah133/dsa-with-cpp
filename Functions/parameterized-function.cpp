#include<iostream>

using namespace std;

// user defined functions

void sum(float, float); // declartion
void mul(int, int);
void bhagakar(int, int);

int main(){
    float a, b;

    sum(10, 20);
    mul(20, 3);
    bhagakar(15, 3);

    return 0;
}

void sum(float ramu, float shyamu){ // body
    cout << ramu + shyamu << endl;
}

void mul(int p, int q){
    cout << p * q << endl;
}

void bhagakar(int num, int dino){
    cout << num / dino << endl;
}