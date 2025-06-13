#include<iostream>
using namespace std;
int main()
{
	int m;
	char flag = 'y';
	while (1)
	{
		cout<<"请输入你要判断的数:";
		cin>>m;
		if(m%2 == 0)
			cout<<"m是偶数"<<endl;
		else
			cout<<"m是奇数"<<endl;
		cout<<"是否继续进行判断(y or n)?"<<endl;
		cin>>flag;
		if(flag != 'y' && flag != 'Y')
			break;
	}
	return 0;
}

