#include <iostream>
int main()
{
	std::cout << "Enter two nums: " << std::endl;
	int v1 = 0, v2 = 0, temp = 0;
	std::cin >> v1 >> v2;
	
	if(v1 > v2){
		temp = v1;
		v1 = v2;
		v2 = temp;
	}
	
	while(v1 <= v2){
		std::cout << v1 << std::endl;
		++v1;
		//TODO
	}
	return 0;
}
