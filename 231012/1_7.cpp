#include <iostream>
using namespace std;
int main()
{
	char x;
	int n=0;
	for(x='A';x<='D';x++){
		if(x!='A')n++;
		if(x=='C')n++;
		if(x=='D')n++;
		if(!(x=='D'))n++;
		if(n==3){
			cout<<x;
			break;
		}
		n=0;
	}
	
	return 0;
}
