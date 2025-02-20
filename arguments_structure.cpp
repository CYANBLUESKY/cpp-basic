#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float height;
    float weight;
};

void check_age(Person *adult, int count) {
    for (int i = 0; i < count; i++) {
        if (adult[i].age >= 25) {
            cout << "name : " << adult[i].name << endl;
            cout << "age : " << adult[i].age << endl;
            cout << "height : " << adult[i].height << endl;
            cout << "weight : " << adult[i].weight << endl;
        }
    }
}


int main() {
    Person adult[3]{
        {"Brain", 22, 173, 58},
        {"kim", 30, 163, 50},
        {"Jessica", 22, 173, 58}
    };
    check_age(adult, 3);
    return 0;
}
