#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout<<"请输入两个字符串:"<<endl;
	string str1,str2;
	cin>>str1>>str2;
	char ca[80];
	char pa[80];
	if(str1 >  str2)
		cout<<"第一个字符串大于第二个字符串"<<endl;
	else if(str1 < str2)
		cout<<"第一个字符串小于第二个字符串"<<endl;
	else
		cout<<"两个字符串相等"<<endl;
	cout<<"请继续输入两个字符串"<<endl;
	cin>>ca>>pa;
	auto result = strcmp(ca,pa);
	if(result == 0)
		cout<<"两个字符串相等"<<endl;
	else if(result > 0)
		cout<<"第一个字符串大于第二个字符串"<<endl;
	else
		cout<<"第一个字符串小于第二个字符串"<<endl;
	return 0;
}

