#include <iostream>

int main()
{
	// �ʱ�ȭ
	int width;
	width = 5; // copy assignment of value 5 int variable width
	
	// variable with now has value 5

	width = 7; // change value stored in variable width to 7

	// variable width now has value 7


	int a;         // no initializer (default initialization)
	int b = 5;     // initializer after equals sign (copy initialization)
	int c(6);    // initializer in parenthesis (direct initialization)

	// List initialization methods (C++11) (preferred)
	int d{ 7 };   // initializer in braces (direct list initialization)
	int e = { 8 }; // initializer in braces after equals sign (copy list initialization)
	int f{};      // initializer is empty braces (value initialization)

	// �ʱ�ȭ ����
	int widtha = 5; // copy initialization of value 5 into variable width

	// ���� �ʱ�ȭ
	int widthb(5); // direct initialization of value 5 into variable width

	// �ʱ�ȭ ���
	int widthc{ 5 };    // direct list initialization of value 5 into variable width
	int height = { 6 }; // copy list initialization of value 6 into variable height
	int depth{};       // value initialization (see next section);

	// �� �ʱ�ȭ �� ���� �ʱ�ȭ

	int x{ 0 };
	int y{ };

	std::cout << x << std::endl;
	std::cout << y << std::endl;

	// ���� ���� �ʱ�ȭ
	
	int a = 5, b = 6; // copy initalization
	int c(7), d(8); // direct initalization
	int e{ 9 }, f{ 10 }; // direct brace initalization
	int g = { 9 }, h = { 10 }; // copy brace initalization
	int i{}, j{};			   // value initialization

	// int a, b = 5; // => wrong ( a is not initialized!)

	

	return 0;
}