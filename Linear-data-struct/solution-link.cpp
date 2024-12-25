#include<iostream>
using namespace std;

class Node { // self referencial class
    public:
        int data;
        Node *next;

        Node(){}
        Node(int data){
            this->data = data;
        }
};

int main(){
    Node *HEAD = new Node(45);
    HEAD->next = nullptr;

    Node *current = new Node(36);
    current->next = nullptr;
    HEAD->next = current;

    current = new Node(63);
    current->next = nullptr;
    HEAD->next->next = current;

    current = new Node(93);
    current->next = nullptr;
    HEAD->next->next->next = current;

    Node *ptr = nullptr;
    ptr = HEAD;

    while(ptr != nullptr){
        cout << ptr->data << " " << ptr << " Next : " << ptr->next << endl;
        ptr = ptr->next;
    }
    
    return 0;
}