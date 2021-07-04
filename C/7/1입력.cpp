#include <iostream>

int main()
{
    int a, b;
    char line[] = "-----------------------";

    while (true) // C와 다르게 논리 자료형이 가능하다.
    {
        std::cout << "input a : " << std::ends;
        std::cin >> a;
        std::cout << "input b : " << std::ends;
        std::cin >> b;
        if(a == b)
            break;
        std::cout << line << std::endl;
        std::cout << "a + b = " << a + b << std::endl;
        std::cout << line << std::endl;
    }
    std::cout << "Process EXIT" << std::endl;

    return 0;
}