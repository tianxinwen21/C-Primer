#include <iostream>
using namespace std;
int main()
{
	int ia[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
	cout<<"版本1:"<<endl;
	for(auto &row:ia)
	{
		for(auto col:row)
			cout<<col<<" ";
		cout<<endl;
	}
	cout<<"版本2:"<<endl;
	for(auto row = 0 ; row < 3 ; row++)
	{
		for(auto col = 0 ; col < 4 ; col++)
			cout<<ia[row][col]<<" ";
		cout<<endl;
	}
	cout<<"版本3:"<<endl;
	for(auto row = ia ; row !=  ia +3 ; row++)
	{
		for(auto col = *row ; col != *row +4 ; col++)
			cout<<*col<<" ";
		cout<<endl;
	}
	return 0;
}

