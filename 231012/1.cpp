#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int num;
	buck:
	cout<<"请根据一下菜单选择所需功能：\n1.符号函数\n2.合数\n3.随机三个连续字母\n4.桃子数量\n5.100以内加减法\n6.1元的拆分\n7.谁砸的窗户\n8.一年中的第几天\n请输入（1-8）：";
	cin>>num;
	switch(num){
		case 1:{
			int n1;
			cin>>n1;
			if(n1<0)cout<<"-1"<<endl;
			else if(n1>0)cout<<"1"<<endl;
			else cout<<"0"<<endl;
			break;
		}
		case 2:{
			int sum2=0;
			for(int i=1;i<=1000;i++){
				for(int m=1;m<i;m++){
					if(i%m==0)sum2+=m;
				}
			if(sum2==i)cout<<i<<endl;
			sum2=0;
			}
			break;
		}
		case 3:{
			int n3=rand();
			if(n3%26<24)cout<<char(n3%26+'a')<<char(n3%26+'a'+1)<<char(n3%26+'a'+2)<<endl;
			else if(n3%26==24)cout<<char(n3%26+'a')<<char(n3%26+'a'+1)<<char(n3%26+'a'-24)<<endl;
			else if(n3%26==25)cout<<char(n3%26+'a')<<char(n3%26+'a'-25)<<char(n3%26+'a'-24)<<endl;
			}
			break;
		}
		case 4:{
			int sum4=1;
			for(int i=1;i<10;i++)sum4=(sum4+1)*2;
			cout<<sum4<<endl;
			break;
		}
		case 5:{
			int a5=rand()%100+1,b5=rand()%100+1,sum5=0,score5=0;
			for(int i=0;i<10;i++){
				cout<<a<<"+"<<b<<"=";
				cin>>sum5;
				if(sum5==a5+b5){
					cout<<"正确"<<endl;
					score5+=10;
				}else cout<<"错误，再做一遍"<<endl;
				a5=rand()%100+1,b5=rand()%100+1;
			}
			cout<<score5<<endl;
			break;
		}
		case 6:{
			int wufen,liangfen,yifen;
			for(wufen=0;wufen<=20;wufen++){
				for(liangfen=0;liangfen<=(100-wufen*5)/2;liangfen++){
					yifen=100-wufen*5-liangfen*2;
					if(yifen>=0)cout<<wufen<<"个5分，"<<liangfen<<"个2分，"<<yifen<<"个1分。"<<endl; 
				}
			}
			break;
		}
		case 7:cout<<"C"<<endl;break;
		case 8:{
			int n8,year,month,day,days=0;
			cin>>n8;
			year=n8/10000;
			month=(n%10000)/100;
			day=n8%100;
			
			switch(month-1){
				case 11:days+=30;
				case 10:days+=31;
				case 9:days+=30;
				case 8:days+=31;
				case 7:days+=31;
				case 6:days+=30;
				case 5:days+=31;
				case 4:days+=30;
				case 3:days+=31;
				case 2:
					if(year%400==0||year%4==0&&year/100!=0)days+=29;
					else days+=28;
				case 1:days+=31;
			}
			days+=day;
			
			cout<<days<<endl;
			break;
		}
		default:
			cout<<"输入错误，请重新输入。"<<endl;
			goto back;
	return 0;
}
