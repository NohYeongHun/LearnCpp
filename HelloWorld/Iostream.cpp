// 입출력 라이브러리
#include<iostream>

int main()
{
	// std::cout
	int x{ 5 };
	std::cout << x;

	std::cout << "Hello" << " world!";

	std::cout << '\n';

	// std::endl 적용 전
	std::cout << "not appy std::endl\n";
	std::cout << "Hi!";
	std::cout << "My name is Alex.";

	std::cout << '\n';

	// std::endl 적용 후
	std::cout << "appy std::endl\n";
	std::cout << "Hi!" << std::endl;
	std::cout << "My name is Alex." << std::endl;

	std::cout << '\n';
	/* std::endl vs '\n' 사용
	* endl은 커서를 콘솔의 다음 줄로 이동 뒤 버퍼를 플러시
	* \n은 주기적으로 플러시. => 더 효율적
	*/ 
	std::cout << "diff std::endl vs \\n" << '\n';
	std::cout << "x is equal to: " << x << '\n';
	std::cout << "And that's all, folks\n!";

	// std::cin
	std::cout << "apply cin\n";
	int v{ };
	std::cin >> v;
	std::cout << "You entered " << v << '\n';

	// std::cin input two numbers
	int v1{}, v2{};
	std::cout << "std::cin two numbers" << '\n';
	std::cin >> v1 >> v2;

	std::cout << "You entered " << v1 << " and " << v2 << '\n';


	// Quiz
	std::cout << "Enter a number: "; // ask user for a number
	int x{}; // define variable x to hold user input
	std::cin >> x; // get number from keyboard and store it in variable x
	std::cout << "You entered " << x << '\n';
	return 0;

	return 0;
}
