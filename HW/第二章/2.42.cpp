#include <iostream>
#include "Sales_data.h"

using namespace std;

int main() {
	Sales_data trans1, trans2;
	std::cout << "请输入两条 ISBN 相同的销售记录：" << std::endl;
	std::cin >> trans1 >> trans2;
	if (compareIsbn(trans1, trans2))
		std::cout << "汇总信息：ISBN、销售本数、原始价格、实售价格、折扣为："
		<< "\n" << trans1 + trans2 << std::endl;
	else
		std::cout << "两条销售记录的 ISBN 不同" << std::endl;
	
	return 0;
}

