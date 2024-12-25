#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

class LinkedList {
    public:
        Node *head;
        int count;

        LinkedList(){
            this->head = nullptr;
            this->count = 0;
        }

        void addAtStart(int data){
            Node *newNode = new Node(data); // step 1

            newNode->next = this->head; // step 2
            this->head = newNode; // step 3
            this->count++;

            cout << "New node inserted at start..." << endl;
        }

        void addAtEnd(int data){
            Node *newNode = new Node(data);

            if(count == 0){ // linked list empty
                this->head = newNode; // only step
            } else {
                Node *temp = head; // step 2

                while(temp->next != nullptr){ // step 3 - traversing the list till end
                    temp = temp->next;
                }

                temp->next = newNode; // step 4
                cout << "New node inserted at end...." << endl;
            }
            this->count++;
        }

        void addAtPosition(int data, int pos){
            Node *newNode = new Node(data);

            if(pos == 0){
                newNode->next = this->head; // step 2
                this->head = newNode; // step 3
            } else {
                Node *temp = this->head;
                for(int i = 0; i < pos - 1; i++){
                    temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode; // 0xff54aa
            }
            this->count++;
        }

        void updateAtPosition(int data, int pos){
            if(this->count == 0 || this->head == NULL){
                cout << "Linked List is empty....." << endl;
                return;
            }

            Node *temp = head;
            for(int i=0; i < pos; i++){
                temp = temp->next;
            }

            temp->data = data;
            cout << "Data updated...." << endl;
        }

        void deleteAtStart(){
            if(this->count == 0 || this->head == NULL){
                cout << "Linked List is empty....." << endl;
                return;
            }

            Node *temp = this->head;
            this->head = this->head->next;

            delete temp;
            temp = NULL;

            this->count--;
        }

        void deleteAtEnd(){
            if(this->count == 0 || this->head == NULL){
                cout << "Linked List is empty....." << endl;
                return;
            }

            Node *temp = head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }

            delete temp->next;
            temp->next = nullptr;

            temp  = nullptr;

            this->count--;
        }

        void deleteAtAny(int pos){
            if(this->count == 0 || this->head == NULL){
                cout << "Linked List is empty....." << endl;
                return;
            }
            if(pos == 0){
                this->deleteAtStart();
                cout << "Element deleted successfully......" << endl;
                return;
            }
            Node *prev = this->head, *curr = this->head;

            // Step 1
            for(int i = 0; i < pos; i++){
                curr = curr->next;
            }

            // step 2
            for(int i=0; i < pos - 1; i++){
                prev = prev->next;
            }

            prev->next = curr->next;

            delete curr;
            curr = NULL;

            prev = NULL;
            delete prev;

            this->count--;

            cout << "Element deleted successfully......" << endl;
        }

        void viewAll(){
            if(count == 0){
                cout << "Linked List is empty...." << endl;
                return;
            }

            Node *ptr = head;

            while(ptr != NULL){
                cout << ptr->data << " ";
                ptr = ptr->next;
            }

            cout << endl;
        }

        void getSize(){
            cout << "Size of linked list is : " << this->count << endl;
        }
};

int main(){
    LinkedList list;
    int choice;

    do {
        cout << "Enter 1 to Insert at beginning..." << endl;
        cout << "Enter 2 to Insert at ending...." << endl;
        cout << "Enter 3 to Insert at any position...." << endl;
        cout << "Enter 4 to View all elements : " << endl;
        cout << "Enter 5 to Update element :" << endl;
        cout << "Enter 6 to Delete from start : " << endl;
        cout << "Enter 7 to Delete from end : " << endl;
        cout << "Enter 8 to Delete at Any : " << endl;
        cout << "Enter 9 to Get Size : " << endl;
        cout << "Enter 0 to exit...." << endl;
        
        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1: {
                int data;
                
                cout << "Enter value to insert : ";
                cin >> data;

                list.addAtStart(data);
                break;
            }
            case 2: {
                int data;
                
                cout << "Enter value to insert : ";
                cin >> data;

                list.addAtEnd(data);
                break;
            }
            case 3: {
                int data, pos;
                
                cout << "Enter value to insert : ";
                cin >> data;

                cout << "Enter position : ";
                cin >> pos;

                list.addAtPosition(data, pos);
                break;
            }
            case 4: {
                list.viewAll();
                break;
            }
            case 5: {
                int data, pos;
                
                cout << "Enter position : ";
                cin >> pos;

                cout << "Enter value to update : ";
                cin >> data;

                list.updateAtPosition(data, pos);
                break;
            }
            case 6: {
                list.deleteAtStart();
                break;
            }
            case 7: {
                list.deleteAtEnd();
                break;
            }
            case 8: {
                int pos;
                
                cout << "Enter position : ";
                cin >> pos;
                
                list.deleteAtAny(pos);

                break;
            }
            case 9:
                list.getSize();
                break;
            case 0:
                cout << "Thanks for visiting..." << endl;
                break;
            default:
                cout << "Invalid choice...." << endl;
        }
    } while(choice != 0);
    return 0;
}