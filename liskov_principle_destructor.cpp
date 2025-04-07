#include <iostream>
using namespace std;

class monster {
public:
    monster() {
        cout << "monster 클래스 생성자" << endl;
    }

    ~monster() {
        cout << "monster 클래스 소멸자" << endl;
    }
};

class monster_a : public monster {
public:
    monster_a() {
        cout << "monster_a 클래스 생성자" << endl;
    }

    ~monster_a() {
        cout << "monster_a 클래스 소멸자" << endl;
    }
};

int main() {
    monster *forest_monster = new monster_a();
    delete forest_monster;
    return 0;
}


// 부모 클래스의 소멸자는 항상 virtual로 선언하는 게 안전
