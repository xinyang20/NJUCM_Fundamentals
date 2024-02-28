#include <iostream>
#include<cstring>
using namespace std;
#define N 100

    //获取参数方式 cin
    //int x =0;
    //cin >> x;

    //结果输出使用 cout
    //cout<<"1";

 	// 请在此添加你的代码
    /********** Begin ********/
struct bookimformation{
	int number;
	string name;
	string author;
	string press;
	int date;
}book[N];

int main(){
	int num,n=0;
	while(true){
		cin>>num;
		if(num==0)break;
		book[n].number=num;
		cin>>book[n].name >>book[n].author >>book[n].press >>book[n].date ;
		n++;
	}
	string search;
	cin>>search;
	for(int i=0;i<n;i++){
		if(search==book[i].author){
			cout<<
			"Number:"<<book[i].number<<endl<<
			"Name:"<<book[i].name<<endl<<
			"Author:"<<book[i].author<<endl<<
			"Press:"<<book[i].press<<endl<<
			"Publication Date:"<<book[i].date<<endl;
		}
	}
	return 0;
}


	/********** End **********/

