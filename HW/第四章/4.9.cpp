#include <iostream>
using namespace std;
int main()
{
	const char* cp = "Hello World";
	const char*p = NULL;
	if(cp&&*cp)
	{
		cout<<"cp&&*cp"<<endl;
	}
	return 0;
}

