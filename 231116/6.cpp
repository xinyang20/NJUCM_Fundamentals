#include <iostream>
#include <string.h>
using namespace std;
int f(char *x)
{
	/********Begin********/
	int len=strlen(x);
	for(int i=1;i<len/2;i++){
		if(*(x+i-1)!=*(x+len-i))return 0;
	}
	return 1;
	/******** End ********/
}
int main()
{
	char str[80];
	puts("please input a string:");
	cin>>str;
	if(f(str))
		cout<<"yes\n";
	else
		cout<<"no\n";
	return 0;
}
