#include <iostream>
using namespace std;
int sort(int * p1,int * p2,int * p3)
{
	int t;
	/********Begin********/
	if(*p1>*p2){
		t=*p1;
		*p1=*p2;
		*p2=t;
	}
	if(*p1>*p3){
		t=*p1;
		*p1=*p3;
		*p3=t;
	}
	if(*p2>*p3){
		t=*p2;
		*p2=*p3;
		*p3=t;
	}
	/******** End ********/
	return 0;
}
int main()
{
	int a,b,c,* pointer_1,* pointer_2,* pointer_3;
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;
	cin>>a>>b>>c;
	sort(pointer_1,pointer_2,pointer_3);
	cout<<* pointer_1<<","<<* pointer_2<<","<<* pointer_3<<endl;
	return 0;
}
