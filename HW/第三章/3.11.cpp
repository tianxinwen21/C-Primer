#include <iostream>
#include <string>

using namespace std;

int main() {
	const string s = "Keep out!";
	for (auto &c : s) {
		c = 'X';
		// 其他对 c 的操作
	}
	
	return 0;
}
//语法上是合法的，但s的值不能改变。不能正常编译
