#include<iostream>

using namespace std;

class MyClass {
    private:
        int *arr;
        int size;
    public:
        MyClass(){ // dc
            cout << "Object Created !";
        }

        MyClass(int size){ // pc
            this->size = size;
            this->arr = new int[this->size];

            if(this->arr != NULL){
                cout << "Memory Assigned successfully !" << endl;
            } else {
                cout << "Gelat bat !";
            }
        }
        ~MyClass(){
            delete[] arr;
            arr = NULL;

            if(arr == NULL){
                cout << "Memory Deallocated successfully !" << endl;
            } else {
                cout << "Gelat bat !";
            }
        }
        void addElement(int ele, int index){
            if(index >= 0 && index < this->size){
                this->arr[index] = ele;
                cout << ele << " assigned on index : " << index << endl;
            } else {
                cout << "Array index out of bound....." << endl;
            }
        }
        void showAllElement(){
            for(int i = 0; i < this->size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    MyClass *o1;
    o1 = new MyClass(5);

    o1->addElement(10, 0);
    o1->addElement(50, 1);
    o1->showAllElement();

    delete o1;
    o1 = NULL;
    return 0;    
}