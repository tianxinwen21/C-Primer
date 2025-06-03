#include <iostream>
#include <vector>
using namespace std;
int main()
{
	constexpr size_t array_size = 10;
	int array[array_size],array_2[array_size];
	for(size_t ix = 0 ; ix < array_size ; ix++)
	{
		array[ix] = ix;
	}
	for(size_t ix = 0 ; ix < array_size ; ix++)
	{
		array_2[ix] = array[ix];
	}
	cout<<"array:";
	for(auto a : array_2)
		cout<<a<<" ";
	cout<<endl;
	vector<int> vec;
	for(size_t ix  = 0; ix < 10 ;ix++)
		vec.push_back(ix);
	vector<int> vec_2;
	for(size_t ix = 0; ix < 10 ; ix++)
		vec_2.push_back(vec[ix]);
	cout<<"vector:";
	for(auto b: vec_2)
		cout<<b<<" ";
	cout<<endl;
	return 0;
}

