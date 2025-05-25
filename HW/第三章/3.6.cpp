#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cout << "请输入一个字符串，可以包含空格：" << endl;
	getline(cin, str);
	for(auto &c : str){
		c = 'X';
	}
	cout << str << endl;
	
	return 0;
}
