#include <iostream>
using namespace std;
#define N 20
int main()
{

    //获取参数方式 cin
    //int x =0;
    //cin >> x;

    //结果输出使用 cout
    //cout<<"1";

     // 请在此添加你的代码
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

