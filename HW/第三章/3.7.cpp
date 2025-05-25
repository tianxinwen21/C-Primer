#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cout << "请输入一个字符串，可以包含空格：" << endl;
	getline(cin, str);
	for(char &c : str){
		c = 'X';
	}
	cout << str << endl;
	
	return 0;
}

//将循环控制变量的类型设为 char 不会对程序运行结果造成影响，
//因为我们使用 auto 自动推断字符串 s 的元素类型，结果同样是 char

