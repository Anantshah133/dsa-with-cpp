#include<iostream>

using namespace std;

class Stack {
    private:
        int *arr;
        int top;
        int capacity;
        int count;
    public:
        Stack(int size){
            this->capacity = size;
            this->arr = new int[capacity];
            this->top = -1;
            this->count = 0;
        }
        ~Stack(){
            delete[] this->arr;
        }

        void push(int);
        void pop();
        void peek();
        void display();
        bool isEmpty();
        bool full();
        int size();
};

void Stack::push(int data){
    if(this->top == this->capacity - 1){
        cout << "Stack is overflown....." << endl;
        return;
    }

    this->top++;
    this->arr[top] = data;
    this->count++;
}

void Stack::pop(){
    if(this->top == -1){
        cout << "Stack is underflown...." << endl;
        return;
    }

    cout << "Element : " << this->arr[top] << " Popped....." << endl;
    this->arr[top] = 0;
    this->top--;
    this->count--;
}

void Stack::peek(){
    cout << "Top element from stack is : " << this->arr[top] << endl;
}

void Stack::display(){
    for(int i = this->top; i >= 0; i--){
        cout << this->arr[i];
    }
}

bool Stack::isEmpty(){
    return this->top == -1 ? true : false;
}

bool Stack::full(){
    return this->top == this->capacity - 1 ? true : false;
}

int Stack::size(){
    return this->count;
}

int main(){
    Stack binaryStk(20);
    int n;

    cout << "Enter any number : ";
    cin >> n;

    while(n > 0){
        int rem = n % 2;
        binaryStk.push(rem);
        n = n / 2; // Infinite
    }

    cout << "Binary of number : ";
    binaryStk.display();

    return 0;
}

// 1000011