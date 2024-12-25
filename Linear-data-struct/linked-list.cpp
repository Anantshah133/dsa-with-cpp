#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

int main(){
    Node *HEAD = NULL;
    HEAD = new Node();

    HEAD->data = 50;
    HEAD->next = NULL;

    Node *n2 = new Node(); // Default Constructor

    n2->data = 98;
    n2->next = nullptr;
    HEAD->next = n2;

    Node *n3 = new Node();

    n3->data = 65;
    n3->next = nullptr;
    n2->next = n3;

    cout << "Head : " << HEAD->data << " Next : " << HEAD->next << " Address of node : " << HEAD << endl;
    cout << "N2 : " << n2->data << " Next : " << n2->next << " Address of node : " << n2 << endl;
    cout << "N3 : " << n3->data << " Next : " << n3->next << " Address of node : " << n3 << endl;


    // long long int *ptr;
    // cout << sizeof(ptr);

    return 0;
}

// Undifined behaviour of c++

// head -> n2 -> n3