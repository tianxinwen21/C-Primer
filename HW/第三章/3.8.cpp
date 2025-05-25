#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//	string str;
//	cout << "请输入一个字符串，可以包含空格：" << endl;
//	getline(cin, str);
//	int i = 0;
//	while(str[i] != '\0'){
//		str[i] = 'X';
//		++i;
//	}
//	cout << str << endl;
//	
//	return 0;
//}

int main() {
	string str;
	cout << "请输入一个字符串，可以包含空格：" << endl;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		str[i] = 'X';
	}
	cout << str << endl;
	
	return 0;
}
