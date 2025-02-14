#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    cout << "아스키 코드 출력하기 [32 ~ 126]:\n";
    for (char i = 32; i <= 126; i++) {
        cout << i << ((i % 16 == 15) ? '\n' : ' ');
    }
    return 0;
}
