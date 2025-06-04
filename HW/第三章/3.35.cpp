#include<iostream>
using namespace std;
int main()
{
	constexpr size_t array_size = 10;
	int array[array_size] = {1,1,1,1,1,1,1,1,1,1};
	int* beginP = begin(array),*endP = end(array);
	for(beginP ; beginP != endP ; beginP++)
		*beginP = 0;
	for(auto a : array)
		cout<<a<<" ";
	cout<<endl;
	return 0;
}

