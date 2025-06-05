#include <iostream>
using namespace std;
int main()
{
	const char ca[] = {'h','e','l','l','o'};
	const char *cp = ca;
	while(*cp)
	{
		cout<<*cp<<endl;
		++cp;
	}
	return 0;
}
//正常情况下,ca的5个字符全部输出后,并没有遇到预期的空字符,也就是while的循环条件仍然满足,
//无法跳出,程序继续在内存中ca的存储位置之后挨个寻找空字符,直到找到为止,这个过程中额外的内容也会被输出出来
