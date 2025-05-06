//对称的两个数字相加，结果为0
#include <iostream>
int main()
{
	int sum = 0;
	for(int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum;
	return 0;
}
