#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> Vint;
	srand((unsigned)time(NULL));
	const int sz = 10;
	for(int i =0 ; i < sz ; i++)
		Vint.push_back(rand()%100);
	int ia[Vint.size()];
	auto it = Vint.cbegin();
	for(auto &val : ia)
	{
		val = *it;
		it++;
	}
	for(auto a: ia)
		cout<<a<<" ";
	cout<<endl;
	return 0;
}

