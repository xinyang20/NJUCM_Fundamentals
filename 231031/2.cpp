#include <iostream>
using namespace std;
#define N 20
int main()
{

    //��ȡ������ʽ cin
    //int x =0;
    //cin >> x;

    //������ʹ�� cout
    //cout<<"1";

     // ���ڴ������Ĵ���
    /********** Begin ********/
	struct Lifting{
		char name[20];
		float weight;
		int score[3];
	}a,b;
	cin>>a.name>>a.weight>>a.score[0]>>a.score[1];
	a.score[2]=(a.score[0]+a.score[1])/2.0;
	cin>>b.name>>b.weight>>b.score[0]>>b.score[1];
	b.score[2]=(b.score[0]+b.score[1])/2.0;
	if(a.score[2]>b.score[2])cout<<a.name<<endl;
	else if(a.score[2]<b.score[2])cout<<b.name<<endl;
	else if(a.weight>b.weight)cout<<b.name<<endl;
	else cout<<a.name<<endl;
	

    /********** End **********/
}

