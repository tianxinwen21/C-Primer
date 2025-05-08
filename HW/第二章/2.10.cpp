#include <iostream>
std::string global_str; //空
int global_int; //0
int main()
{
	int local_int; //0
	std::string local_str;//空
	std::cout << "global_str = " << global_str << std::endl;
	std::cout << "global_int = " << global_int << std::endl;
	std::cout << "local_str = " << local_str << std::endl;
	std::cout << "local_int = " << local_int << std::endl;
	return 0;
}

