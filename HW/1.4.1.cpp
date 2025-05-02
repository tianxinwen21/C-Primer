#include <iostream>
int main()
{
	int sum = 0, val = 0;
	while(val <= 10){
		//只要val的值小于等于10，while循环就会持续执行
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
			  << sum << std::endl;
	return 0;
}
