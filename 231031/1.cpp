#include <iostream>
using namespace std;
struct fushu{
	int a;
	int b;
};
void sub(int a,int b,int c,int d)
{
	cout<<"c3 is ("<<a-c<<")+("<<b-d<<")i"<<endl;
}
void mul(int a,int b,int c,int d)
{
	cout<<"c4 is ("<<a*c-b*d<<")+("<<a*d+b*c<<")i"<<endl;
}
int main()
{
	struct fushu c1,c2;
	cin>>c1.a>>c1.b>>c2.a>>c2.b;
	sub(c1.a,c1.b,c2.a,c2.b);
	mul(c1.a,c1.b,c2.a,c2.b);
	return 0;
}
