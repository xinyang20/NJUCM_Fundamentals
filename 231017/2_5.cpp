#include <iostream>
using namespace std;
int main()
{
	int get=100000*30;
	double give=0.01,totle=0.0;
	for(int i=0;i<30;i++){
		totle+=give;
		give*=2;
	}
	cout<<"百万富翁收取了"<<get<<"元"<<endl;
	cout<<"百万富翁付给陌生人"<<totle<<"元"<<endl;
	if(totle>get)cout<<"对陌生人有利"<<endl;
	else cout<<"对百万富翁有利"<<endl;
	return 0;
}
