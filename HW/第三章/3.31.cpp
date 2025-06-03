#include <iostream>
using namespace std;
int main()
{
	constexpr size_t array_size = 10;
	int array[array_size];
	for(size_t ix = 0 ; ix < array_size ; ix++)
	{
		array[ix] = ix;
	}
	for(auto a : array)
		cout<<a<<" ";
	cout<<endl;
	return 0;
}

