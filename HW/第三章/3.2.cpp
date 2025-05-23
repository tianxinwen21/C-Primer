// 一次读入一整行
//#include <iostream>
//#include <string>
//
//using std::string;
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main() {
//	string line;
//	while (getline(cin, line))
//		cout << line << endl;
//	
//	return 0;
//}


// 一次读入一个词，遇到空白停止
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string word;
	while (cin >> word)
		cout << word << endl;
	
	return 0;
}

