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
    cout << "Element : " << this->arr[top] << " Pushed....." << endl;
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
    cout << "-----------" << endl;
    if(this->top == -1){
        cout << "Stack is empty...." << endl;
        cout << "-----------" << endl;
        return;
    }
    cout << "Stack elements are : ";
    for(int i = this->top; i >= 0; i--){
        cout << this->arr[i] << " ";
    }
    cout << endl;
    cout << "-----------" << endl;
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
    Stack stack(5);
    int choice;

    do {
        cout << "Enter 1 for push...." << endl;
        cout << "Enter 2 for pop...." << endl;
        cout << "Enter 3 for peek...." << endl;
        cout << "Enter 4 for display...." << endl;
        cout << "Enter 5 for empty...." << endl;
        cout << "Enter 6 for full...." << endl;
        cout << "Enter 7 for size...." << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1 : {
                int data;

                cout << "Enter data : ";
                cin >> data;

                stack.push(data);
                break;
            }
            case 2:
                stack.pop();
                break;
            case 3:
                stack.peek();
                break;
            case 4:
                stack.display();
                break;
            case 5:
                if(stack.isEmpty() == true){
                    cout << "Haa Stack is empty..." << endl;
                } else {
                    cout << "Haa Stack is not empty..." << endl;
                }
                break;
            case 6:
                if(stack.full()){
                    cout << "Haa Stack is Full..." << endl;
                } else {
                    cout << "Haa Stack is not Full..." << endl;
                }
                break;
            case 7:
                cout << "Current size of stack is : " << stack.size() << endl;
                break;
            case 0:
                cout << "Thanks for using... fir bhi 40₹ de.." << endl;
                break;
            default:
                cout << "Pehle 40$ de...." << endl;
        }
    } while(choice != 0);

    return 0;
}