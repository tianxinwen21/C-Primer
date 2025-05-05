//0-201-78345-X 3 20.00
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item book;
	//读入ISBN号，售出的册数和销售价格
	std::cin >> book;
	std::cout << book << std::endl;
	return 0;
}
