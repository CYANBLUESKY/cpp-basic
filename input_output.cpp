#include <iostream>

int main()
{
    int a , b;
    std::cout << "Enter a number : "; // 문자열 출력
    std::cin >> a; // 사용자에게 정수를 입력박아 a에 저장

    std::cout << "Enter a number2 : "; // 문자열 출력
    std::cin >> b; // 사용자에게 정수를 입력받아 b에 저장

    std::cout << "a + b = "<< a + b << std::endl; // 두 수의 합 출력
    return 0;
}