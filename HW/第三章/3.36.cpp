#include<iostream>
#include <vector>
#include <ctime>
using namespace std;
int main()
{
	const int sz = 5;
	int array_1[5] ;
	int array_2[5] ;
	vector<int> vec_1;
	vector<int> vec_2;
	cout<<"---------------------采用数组开始比较-----------------------"<<endl;
	srand(time(NULL));
	for(int i = 0 ; i < sz ; i++)
	{
		array_1[i] = rand()%10;
		vec_1.push_back(rand()%10);
	}
	cout<<"系统数据已经生成,请输入您猜测的5个数字(0~9),可以重复,按回车键结束:"<<endl;
	for(int i = 0 ; i < sz ; i++)
		if(cin>>array_2[i]);
	cout<<"系统数据为:";
	for(auto a: array_1)
		cout<<a<<" ";
	cout<<endl<<"猜测数据为:";
	for(auto a: array_2)
		cout<<a<<" ";
	cout<<endl;
	auto beginA = begin(array_1),beginB = begin(array_2);
	while(*beginA == *beginB && beginA != end(array_1) && beginB != end(array_2))
	{
		beginA++,beginB++;
	}
	if(beginA == end(array_1) && beginB == end(array_2))
		cout<<"恭喜您猜对了"<<endl;
	else
		cout<<"您的猜测有误"<<endl;
	cout<<"---------------------采用vector开始比较-----------------------"<<endl;
	cout<<"系统数据已经生成,请输入您猜测的5个数字(0~9),可以重复,按回车键结束:"<<endl;
	int temp;
	for(int i = 0 ; i < sz ; i++)
	{      
		if(cin>>temp)
			vec_2.push_back(temp);
	}
	for(auto a: vec_2)
		cout<<a<<" ";
	cout<<endl;
	auto p =begin(vec_1),q=begin(vec_2);
	while(p!=end(vec_1) && q!=end(vec_2))
	{
		if(*p != *q)
		{
			cout<<"您的猜测有误"<<endl;
			return -1;
		}
		p++;q++;
	}
	cout<<"恭喜您又猜对了"<<endl;
	return 0;
}

