#include <iostream>
int main()
{
	int val = 12, *p = &val;
	std::cout << *p << std::endl;
	*p = 5;
	std::cout << *p << std::endl;
	val = 512;
	std::cout << val << std::endl;
	return 0;
}
