#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a=rand()%100+1,b=rand()%100+1,sum=0,score=0;
	for(int i=0;i<10;i++){
		cout<<a<<"+"<<b<<"=";
		cin>>sum;
		if(sum==a+b){
			cout<<"��ȷ"<<endl;
			score+=10;
		}else cout<<"��������һ��"<<endl;
		a=rand()%100+1,b=rand()%100+1;
	}
	cout<<score<<endl;
	
	return 0;
}
