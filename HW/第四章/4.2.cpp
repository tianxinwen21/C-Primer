#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec;
	srand((unsigned)time(NULL));
	const int sz = 5;
	for(auto i = 0 ; i < sz ; i++)
	{
		vec.push_back(rand()%10);
	}
	cout<<*vec.begin()<<endl;
	cout<<*(vec.begin())<<endl;
	cout<<*vec.begin()+1<<endl;
	cout<<((*(vec.begin()))+1)<<endl;
	return 0;
}

