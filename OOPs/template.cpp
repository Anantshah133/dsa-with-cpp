#include<iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
    private:
        T1 a;
        T2 b;
    public:
        Pair(){}

        Pair(T1 x, T2 y){
            this->a = x;
            this->b = y;
        }

        void getData(){
            cout << this->a << " "; 
            cout << this->b << endl; 
        }
};

int x = 10;

int main(){
    Pair <int, int> p1(10, 56);
    Pair <double, int> p2(45.56, 85);

    p1.getData();
    p2.getData();

    return 0;
}