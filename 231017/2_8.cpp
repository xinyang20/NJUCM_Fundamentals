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
	cout<<x<<"�ľ���ֵΪ"<<fabs(x);
	return 0;
}
