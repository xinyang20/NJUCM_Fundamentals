#include <iostream>
#include <string.h>
using namespace std;
int fun(char *ss)
{
	/********Begin********/
	for(int i=1;*(ss+i)!='\0'&&*(ss+i-1)!='\0';i+=2){
		if(*(ss+i)>='a'&&*(ss+i)<='z')
			*(ss+i)+='A'-'a';
	}
	/******** End ********/
}
int main()
{
	char str[20];
	cout<<"please input string,strlen<20:";
	cin>>str;
	fun(str);
	cout<<endl<<str; 
	return 0;
}
