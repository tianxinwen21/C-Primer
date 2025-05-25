#include <iostream>
#include <string>

using namespace std;
int main(){
	string str;
	cout << "请输入一个字符串，最好含有某些标点符号：" << endl;
	getline(cin, str);
	for(auto c : str){
		if(!ispunct(c))//检查给定的字符是否为标点符号字符
			cout << c;
	}
	return 0;
}


