#include<iostream>
#include<vector>
using namespace std;
int main()
{
	const int sz = 5;
	int ia[sz];
	srand((unsigned)time(NULL));
	for(auto i = 0 ; i  < sz ; i++)
	{
		ia[i] = rand()%10;
	} 
	vector<int> Vint(begin(ia),end(ia));
	for(auto a: Vint)
		cout<<a<<" ";
	cout<<endl;
	return 0;
}

