#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5},i;
	int *p;
	p=a;
	for(i=0;i<5;i++)
		cout<<setw(3)<<a[i];
	cout<<"\n";
	/********Begin********/
	for(i=0;i<5;i++)
		cout<<setw(3)<<*(a+i);
	cout<<"\n";
	for(i=0;i<5;i++)
		cout<<setw(3)<<*(p+i);
	cout<<"\n";
	for(i=0;i<5;i++)
		cout<<setw(3)<<p[i];
	cout<<"\n";
	for(i=0;i<5;i++){
		cout<<setw(3)<<*p;
		p++;
	}
	cout<<"\n";
	
	/******** End ********/
	return 0;
}
