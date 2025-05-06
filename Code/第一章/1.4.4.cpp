//每个值连续出现的次数
#include <iostream>
int main()
{
	//currVal是我们正在统计的数，读入的新值存在val
	int currVal = 0, val = 0;
	//读取第一个数
	if(std::cin >> currVal){
		int cnt = 1;	//保存当前值的个数
		while(std::cin >> val){//读取剩余的数
			if(val == currVal){
				++cnt;
			}
			else{
				std::cout << currVal << " occurs "
				<< cnt << " times" << std::endl;
				currVal = val;	//记住新值
				cnt = 1;		//重置计数器
			}
		}	
		//最后一个值的个数
		std::cout << currVal << " occurs "
		<< cnt << " times" << std::endl;
	}
	return 0;
}
