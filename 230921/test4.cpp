#include <iostream>
using namespace std;
int main()
{
	double x,y,z;
	cout<<"请输入感冒灵的价格。"<<endl;
	cin>>x;
	cout<<"请输入肺宁颗粒的价格。"<<endl;
	cin>>y;
	cout<<"请输入止咳糖浆的价格。"<<endl;
	cin>>z;
	cout<<"平均价格为："<<(x+y+z)/3.0<<endl;
	return 0;
}
