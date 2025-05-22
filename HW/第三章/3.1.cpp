#include <iostream>

using std::cout;
using std::endl;
// using std::cout, std::endl;  // c++17 增加的特性

int main() {
	int sum = 0, val = 50;
	while (val <= 100) {
		sum += val;
		++val;
	}
	cout << "Sum of 50 to 100 inclusive is "
	<< sum << endl;
	
	return 0;
}

