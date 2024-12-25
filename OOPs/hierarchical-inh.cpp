#include<iostream>

using namespace std;

class NormalHuman {
    public:
        string name;

        void canSpeak(){
            cout << "I can speak !" << endl;
        }
};

class Male : public NormalHuman {
    public:
        void maybeCanWorkGood(){
            cout << "I can work maybe !" << endl;
        }
};

class Female : public NormalHuman {
    public:
        void maybeCanCookGood(){
            cout << "I can cook maybe !" << endl;
        }
};

int main(){
    Male m1;
    Female f1;

    m1.canSpeak();
    f1.canSpeak();

    m1.maybeCanWorkGood();
    f1.maybeCanCookGood();

    return 0;
}

//  :: Membership label op...
//  :: Scope Resolution op...