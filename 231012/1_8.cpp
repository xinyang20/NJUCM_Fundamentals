#include <iostream>
using namespace std;
int main()
{
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
	
	return 0;
}
