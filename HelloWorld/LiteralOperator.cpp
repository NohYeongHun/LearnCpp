#include<iostream>

int main()
{
    std::cout << 5 << '\n'; // print the value of a literal

    int x{ 5 };
    std::cout << x << '\n'; // print the value of a variable
    return 0;

    int y{ 2 };
    std::cout << (y = 5) << '\n';
}