#include <iostream>
using namespace std;

class Enemy {
    protected:
    int attackPower;

    public:
    void setAttackPower(int a){
        attackPower = a;
    }
};

class Ninja:public Enemy {

};

int main() {
    
}