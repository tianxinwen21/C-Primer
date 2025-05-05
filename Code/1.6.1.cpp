#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item total;//保存下一条交易的记录
	if(std::cin >> total){
		Sales_item trans;
		while (std::cin >> trans){
			if(total.isbn() == trans.isbn()){
				total += trans;
			}
			else{
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;//打印最后一本书的结果
	}
	else{
		std::cout << " No data?!" << std::endl;
		return -1;
	}
	return 0;
}
