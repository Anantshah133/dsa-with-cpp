#include<iostream>
using namespace std;

class Node { // self referencial class
    public:
        int data;
        Node *next;
};

int main(){
    Node *HEAD = new Node();
    HEAD->data = 45;
    HEAD->next = nullptr;

    Node *current = new Node(); // address = 0685 
    current->data = 36;
    current->next = nullptr;
    HEAD->next = current;

    current = new Node(); // address = 0695
    current->data = 63;
    current->next = nullptr;
    HEAD->next->next = current;

    cout << "Head : " << HEAD->data << " Add of head : " << HEAD << " Head ka next : " << HEAD->next << endl;
    cout << "Node 2 : " << HEAD->next->data << " Add of node 2 : " << HEAD->next << " Node 2 ka next : " << HEAD->next->next << endl;
    cout << "Node 3 : " << HEAD->next->next->data << " Add of node 3 : " << HEAD->next->next << " Node 3 ka next : " << HEAD->next->next->next << endl;

    return 0;
}