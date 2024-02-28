#include <iostream>
using namespace std;
long long int jiecheng(int x)
{
	int sum=1;
	for(int i=1;i<=x;i++)sum *= i;
	return sum;
}
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=jiecheng(i);
	}
	cout<<sum<<endl;
	return 0;
}
