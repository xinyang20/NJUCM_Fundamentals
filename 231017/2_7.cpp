#include <iostream>
using namespace std;
int max(int x,int y){
	int max;
	if(x>y)max=x;
	else max=y;
	return max;
}
int max(int x,int y,int z){
	int max;
	if(x>y)max=x;
	else max=y;
	if(max<z)max=z;
	return max;
}
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	cout<<"x和y中的最大值为"<<max(x,y)<<endl<<"x，y和z中的最大值为"<<max(x,y,z);
	return 0;
}
