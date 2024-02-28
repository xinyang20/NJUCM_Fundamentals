#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	for(int i=1;i<=1000;i++){
		for(int m=1;m<i;m++){
			if(i%m==0)sum+=m;
		}
		if(sum==i)cout<<i<<endl;
		sum=0;
	}
	
	return 0;
}
