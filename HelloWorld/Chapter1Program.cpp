#include<iostream>

int main()
{
	int num{};

	std::cout << "정수를 입력하십시오 : ";
	std::cin >> num;

	std::cout << "해당 " << num <<  "의 두 배 : " << num * 2 << '\n';
	std::cout << "해당 " << num << "의 세 배 : "  << num * 3 << '\n';



}