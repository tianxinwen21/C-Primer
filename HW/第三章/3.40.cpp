#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char pa[] = {'h','e','l','l','o',' ','\0'};
	char pb[] = {'w','o','r','l','d','\0'};
	char pc[strlen(pa)+strlen(pb)];
	strcpy(pc,pa);
	strcat(pc,pb);
	cout<<"第一个字符串是:"<<pa<<endl;
	cout<<"第二个字符串是:"<<pb<<endl;
	cout<<"拼接后的字符串是:"<<pc<<endl;
	return 0;
}

