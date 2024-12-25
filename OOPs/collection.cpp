#include<iostream>
using namespace std;

template <typename T>
class Collection {
    private:
        int size;
        T *arr;
    public:
        Collection(){}

        Collection(int size){
            this->size = size;
            arr = new T[this->size];
        }

        void addElement(int idx, T ele){
            this->arr[idx] = ele;

            cout << "Element Added successfully aap dekh lena....";
        }

        void showElement(){
            for(int i = 0; i < this->size; i++){
                cout << arr[i] << " ";
            }

            cout << endl;
        }

        ~Collection(){
            delete this->arr;
            this->arr = NULL;
        }
};

int main(){
    Collection <int> int_arr(5);
    Collection <float> fl_arr(10);
    Collection <char> c_arr(100);

    return 0;
}