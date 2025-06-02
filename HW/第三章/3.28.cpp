#include <iostream>
using namespace std;
string sa[10];
int ia[10];
int main(){
	string sa2[10];
	int ia2[10];
	cout << "sa:";
	for(int i = 0; i < 10; i++)
		cout << sa[i] << " ";
	cout<<endl<<"ia:";
	for(int i = 0 ; i < 10 ; i ++)
		cout<<ia[i]<<" ";
	cout<<endl<<"sa2:";
	for(int i = 0 ; i < 10 ; i ++)
		cout<<sa2[i]<<" ";
	cout<<endl<<"ia2:";
	for(int i = 0 ; i < 10 ; i ++)
		cout<<ia2[i]<<" ";
	return 0;
}

//sa和ia的定义位置在函数体外,因此会执行默认初始化,sa为空,ia为0
//因为string类型本身接受无参数的初始化方式,所以即便定义在函数内部也被默认初始化为空串
//ia2的定义位置在函数内,因此不会执行默认初始化,一个未被初始化的内置类型
//变量的值是未定义的,如果试图拷贝或输出未初始化的变量,将遇到未定义的奇异值


