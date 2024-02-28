#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	int x1,x2;
	cin>>a>>b>>c;
	if(a==0)cout<<"It's not a univariate quadratic equation"<<endl;
	else if(b*b-4*a*c<0)cout<<"no answer"<<endl;
	else{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		cout<<x1<<" "<<x2<<endl;
	}
	return 0;
}
