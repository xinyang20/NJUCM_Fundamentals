#include <iostream>
#include <cstdlib>
using namespace std;
int menu(void){
	int num;
	cout<<"�����һ�²˵�ѡ�����蹦�ܣ�\n1.���ź���\n2.����\n3.�������������ĸ\n4.��������\n5.100���ڼӼ���\n6.1Ԫ�Ĳ��\n7.˭�ҵĴ���\n8.һ���еĵڼ���\n�����루1-8���˳�������0����"<<endl;
	cin>>num;
	return num;
}



void fuhaohanshu(void){
	int n;
	cin>>n;
	if(n<0)cout<<"-1"<<endl;
	else if(n>0)cout<<"1"<<endl;
	else cout<<"0"<<endl;
}

void heshu(void){
	int sum=0;
	for(int i=1;i<=1000;i++){
		for(int m=1;m<i;m++){
			if(i%m==0)sum+=m;
		}
	if(sum==i)cout<<i<<endl;
	sum=0;
	}
}

void suijizimu(void){
	int n=rand();
	if(n%26<24)cout<<char(n%26+'a')<<char(n%26+'a'+1)<<char(n%26+'a'+2)<<endl;
	else if(n%26==24)cout<<char(n%26+'a')<<char(n%26+'a'+1)<<char(n%26+'a'-24)<<endl;
	else if(n%26==25)cout<<char(n%26+'a')<<char(n%26+'a'-25)<<char(n%26+'a'-24)<<endl;
}

void taozi(void){
	int sum;
	sum=1;
	for(int i=1;i<10;i++)sum=(sum+1)*2;
	cout<<sum<<endl;
}

void jiajian(void){
	int a,b,score,sum;
	a=rand()%100+1,b=rand()%100+1,sum=0,score=0;
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
}

void chaifen(void){
	int wufen,liangfen,yifen;
	for(wufen=0;wufen<=20;wufen++){
		for(liangfen=0;liangfen<=(100-wufen*5)/2;liangfen++){
			yifen=100-wufen*5-liangfen*2;
			if(yifen>=0)cout<<wufen<<"��5�֣�"<<liangfen<<"��2�֣�"<<yifen<<"��1�֡�"<<endl; 
		}
	}
}

void chuanghu(void){
	char x='A';
	for(;x<='D';x++){
		if((x!='A')+(x=='C')+(x=='D')+(x!='D')==3)cout<<x<<endl;
	}
}

void tianshu(void){
	int n,year,month,day,days=0;
			cin>>n;
			year=n/10000;
			month=(n%10000)/100;
			day=n%100;
			
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
}



int main()
{
	buck:
	switch(menu()){
		case 1:
			fuhaohanshu();
			system("pause");
			system("cls");
			goto buck;
		case 2:
			heshu();
			system("pause");
			system("cls");
			goto buck;
		case 3:
			suijizimu();
			system("pause");
			system("cls");
			goto buck;
		case 4:
			taozi();
			system("pause");
			system("cls");
			goto buck;
		case 5:
			jiajian();
			system("pause");
			system("cls");
			goto buck;
		case 6:
			chaifen();
			system("pause");
			system("cls");
			goto buck;
		case 7:
			chuanghu();
			system("pause");
			system("cls");
			goto buck;
		case 8:
			tianshu();
			system("pause");
			system("cls");
			goto buck;
		default:
			break;
	}
	return 0;
}
