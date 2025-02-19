#include <iostream>
using namespace std;

int add(int x, int y) {
    int result = x + y;
    return result;
}

int main() {
    int add_result = add(55, 6);
    cout << "add 함수 결과 : " << add_result << endl;

    return 0;
}
