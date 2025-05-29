#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> vString;     // 元素类型为 string 的 vector 对象
	string s;                   // 记录用户的输入值
	char cont = 'y';            // 与用户交互，决定是否继续输入
	cout << "请输入第一个词：" << endl;
	while (cin >> s) {
		vString.push_back(s);   // 向 vector 对象中添加元素
		cout << "您要继续吗（y or n）？" << endl;
		cin >> cont;
		if (cont != 'y' && cont != 'Y')
			break;
		cout << "请输入下一个词：" << endl;
	}
	cout << "转换后的结果是：" << endl;
	for (auto &mem : vString) { // 使用范围 for 循环语句遍历 vString 中的每个元素
		for (auto &c : mem)     // 使用范围 for 循环语句遍历 mem 中的每个字符
			c = toupper(c);     // 改写为大写字母形式
		cout << mem << endl;
	}
	
	return 0;
}




