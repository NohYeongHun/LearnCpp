// ����� ���̺귯��
#include<iostream>

int main()
{
	// std::cout
	int x{ 5 };
	std::cout << x;

	std::cout << "Hello" << " world!";

	std::cout << '\n';

	// std::endl ���� ��
	std::cout << "not appy std::endl\n";
	std::cout << "Hi!";
	std::cout << "My name is Alex.";

	std::cout << '\n';

	// std::endl ���� ��
	std::cout << "appy std::endl\n";
	std::cout << "Hi!" << std::endl;
	std::cout << "My name is Alex." << std::endl;

	std::cout << '\n';
	/* std::endl vs '\n' ���
	* endl�� Ŀ���� �ܼ��� ���� �ٷ� �̵� �� ���۸� �÷���
	* \n�� �ֱ������� �÷���. => �� ȿ����
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
