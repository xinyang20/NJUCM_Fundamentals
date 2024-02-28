#include <iostream>
#include <iomanip>
using namespace std;
double Fun(char sex,double height){
	if(sex=='F')height*=1.09;
	else height/=1.09;
	return height;
}
int main()
{
	char sex;
	double height;
	cin>>sex>>height;
	cout<<fixed<<setprecision(2)<<Fun(sex,height)<<endl;
	return 0;
}
