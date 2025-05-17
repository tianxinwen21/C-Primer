#include <iostream>
#include <typeinfo>

int main() {
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;
	std::cout << typeid(c).name() << std::endl; // int
	std::cout << typeid(d).name() << std::endl; // int &
	std::cout << c << std::endl; // 4
	std::cout << d << std::endl; // 4
	
	return 0;
}
