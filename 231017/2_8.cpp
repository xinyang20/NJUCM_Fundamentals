#include <iostream>
using namespace std;
template <typename T>
T fabs(T x){
	if(x<0)x=-x;
	return x;
}
int main()
{
	double x;
	cin>>x;
	cout<<x<<"的绝对值为"<<fabs(x);
	return 0;
}
