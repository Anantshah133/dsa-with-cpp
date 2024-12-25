#include<iostream>

using namespace std;

// Interface
class Features { // Abstract Class = The class Which has One or More Pure Virtual Methods(Abstract Methods);
    protected:
        virtual void authentication() = 0;

};

class App : public Features {
    public:
    void authentication(){
        cout << "Auth Done";
    }
};

int main(){
    App a1;

    return 0;
}

// Forcefully Apke pass se Featuread add karvata hei 