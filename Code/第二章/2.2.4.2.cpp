#include <iostream>
int reused = 42;
int main()
{	
	int unique = 0;
	//输出全局变量reused 42 0
	std::cout << reused << " " << unique << std::endl;
	int reused = 0;
	//输出局部变量reused 0 0
	std::cout << reused << " " << unique << std::endl;
	//显示的访问全局变量reused 42 0
	std::cout << ::reused << " " << unique <<std::endl;
	return 0;
}
