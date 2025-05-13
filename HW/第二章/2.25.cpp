//a int *ip, i, &r = i;
//b int i, *ip = 0;
//c int *ip, ip2;

#include <iostream>
int main()
{
//	int* ip, i, &r = i;
//	std::cout << "ip " << typeid(ip).name() << std::endl;
//	std::cout << "i " << typeid(i).name() << std::endl;
//	std::cout << "r " << typeid(r).name() << std::endl;
	
//	int i, *ip = 0;
//	std::cout << "i " << typeid(i).name() << std::endl;
//	std::cout << "ip " << typeid(ip).name() << std::endl;
//	
	int* ip, ip2;
	std::cout << "ip " << typeid(ip).name() << std::endl;
	std::cout << "ip2 " << typeid(ip2).name() << std::endl;
	return 0;
}
