#include <iostream>
using namespace std;

int getNewID() {
    static int id = 0;
    return ++id;
}

int main() {
    cout << "ID: " << getNewID() << endl;
    cout << "ID: " << getNewID() << endl;
    cout << "ID: " << getNewID() << endl;
    cout << "ID: " << getNewID() << endl;
    cout << "ID: " << getNewID() << endl;

    return 0;
}
