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
	cout<<"��������ȡ��"<<get<<"Ԫ"<<endl;
	cout<<"�����̸���İ����"<<totle<<"Ԫ"<<endl;
	if(totle>get)cout<<"��İ��������"<<endl;
	else cout<<"�԰���������"<<endl;
	return 0;
}
