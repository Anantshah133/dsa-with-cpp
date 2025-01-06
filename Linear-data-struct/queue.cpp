#include<iostream>

using namespace std;

class Queue {
    private:
        int *arr;
        int front;
        int rear;
        int capacity;
        int count;
    public:
        Queue(int size){
            this->capacity = size;
            this->arr = new int[size];
            this->front = -1;
            this->rear = -1;
            this->count = 0;
        }
        ~Queue(){
            delete[] this->arr;
        }

        void enqueue(int);
        void dequeue();
        void getFront();
        void getRear();
        void display();
        void isEmpty();
        void isFull();
        void size();
};

void Queue::enqueue(int data){
    if(this->rear == this->capacity - 1){
        cout << "Queue is full......" << endl;
        return;
    }

    if(this->count == 0){ // when q is empty
        this->front = 0;
        this->rear = 0;
        this->arr[rear] = data;
        this->count++;
    } else { // after that this one
        this->rear++;
        this->arr[rear] = data;
        this->count++;
    }
}

void Queue::dequeue(){
    if(this->rear == -1 && this->front ==  -1){
        cout << "Queue is empty......" << endl;
        return;
    }

    if(this->front == this->rear){
        this->arr[front] = 0;
        this->front = -1;
        this->rear = -1;
    } else {
        this->arr[front] = 0;
        this->front++;
    }
    this->count--;
}

void Queue::getFront(){
    if(this->rear == -1 && this->front ==  -1){
        cout << "Queue is empty......" << endl;
        return;
    }

    cout << "This is front element : " << this->arr[front] << endl;
}

void Queue::getRear(){
    if(this->rear == -1 && this->front ==  -1){
        cout << "Queue is empty......" << endl;
        return;
    }

    cout << "This is rear element : " << this->arr[rear] << endl;
}

void Queue::display(){
    if(this->rear == -1 && this->front ==  -1){
        cout << "Queue is empty......" << endl;
        return;
    }

    for(int i = front; i <= rear; i++){
        cout << this->arr[i] << " ";
    }
    cout << endl;
}

int main(){
    Queue q(5);
    int choice;

    do {
        cout << "Enter 1 for enqueue...." << endl;
        cout << "Enter 2 for dequeue...." << endl;
        cout << "Enter 3 for front...." << endl;
        cout << "Enter 4 for rear...." << endl;
        cout << "Enter 5 for display...." << endl;
        cout << "Enter 6 for isempty...." << endl;
        cout << "Enter 7 for isfull...." << endl;
        cout << "Enter 8 for size...." << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1 : {
                int data;

                cout << "Enter data : ";
                cin >> data;

                q.enqueue(data);
                break;
            }
            case 2:
                q.dequeue();
                break;
            case 3:
                q.getFront();
                break;
            case 4:
                q.getRear();
                break;
            case 5:
                q.display();
                break;
            case 6:
                break;
            case 7:
                break;
            case 0:
                break;
            default:
                cout << "Pehle 40$ de...." << endl;
        }
    } while(choice != 0);

    return 0; 
}