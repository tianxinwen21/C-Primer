//1
//#include <iostream>
//int main()
//{
//	int sum = 0;
//	for(int i = 50;i <= 100; i++){
//		sum += i;
//	}
//	std::cout << sum << std::endl;
//	return 0;
//}

//2
//#include <iostream>
//int main()
//{
//	for(int val = 10; val >= 0; val--){
//		std::cout << val << std::endl;
//	}
//	return 0;
//}


//3
#include <iostream>
int main()
{
	std::cout << "Enter two nums: " << std::endl;
	int v1 = 0, v2 = 2, temp = 0;
	std::cin >> v1 >> v2;
	if(v1 > v2){
		temp = v1;
		v1 = v2;
		v2 = temp;
	}
	for(int i = v1; i <= v2; i++){
		std::cout << i <<std::endl;
	}
	return 0;
}
