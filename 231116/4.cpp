#include <iostream>
using namespace std;
int fun(int *s,int t,int *k)
{
	/********Begin********/
	int max=*s;
	for(int i=1;i<t;i++){
		if(*(s+i)>max){
			max=*(s+i);
			*k=i;
		}
	}
	/******** End ********/
}
int main()
{
	int a[10],i,n,mindex,*p=&mindex;
	cout<<"please input number:";
	cin>>n;
	cout<<endl<<n<<" integers:"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	fun(a,n,p);
	cout<<*p<<","<<a[mindex]<<endl;
	return 0;
}
