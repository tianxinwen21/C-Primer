#include<iostream>
using namespace std;
int main()
{
	unsigned scores[11];
	unsigned grade;
	while(cin >> grade)
	{
		++scores[grade/10];
	}
	cout<<endl;
	for(auto a : scores)
	{
		cout<<a<<" ";
	}
	cout<<endl;
	return 0;
}


//该数组会是一些未定义的数值
